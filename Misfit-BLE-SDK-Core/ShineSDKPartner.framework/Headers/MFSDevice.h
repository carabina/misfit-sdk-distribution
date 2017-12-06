//
//  MFSDevice.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Minh Nguyen on 1/9/14.
//  Copyright (c) 2014 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "MFSDevice+Completion.h"
#import "MFSDevice+ActionId.h"
#import "MFSStreamingParameters.h"
#import "MFSEventMapping.h"
#import "MFSAlarm.h"
#import "MFSUAppNotification.h"

@class MFSDevice;
@class MFSConfiguration;
@class MFSConfigurationUpdate;
@class MFSConnectionParameters;
@class MFSConnectionParametersUpdate;
@class MFSButtonEventAnimationMapping;
@class MFSButtonEventResponseAnimation;
@class MFSFirmware;

typedef struct {
    uint8_t major;
    uint8_t minor;
} MFSUAppSystemVersion;

/*!
 *  @enum MFSDeviceState
 *
 *  @description Represents current state of a session.
 *
 *  @constant MFSDeviceStateDisconnected                Disconnected.
 *  @constant MFSDeviceStateConnecting                  Connecting to the device.
 *  @constant MFSDeviceStateConnected                   Connected.
 *  @constant MFSDeviceStatePreparing                   Getting ready.
 *  @constant MFSDeviceStateReady                       Ready.
 *  @constant MFSDeviceStateOTA                         Upgrading device's firwmare.
 */
typedef NS_ENUM(NSUInteger, MFSDeviceState) {
    MFSDeviceStateDisconnected,
    MFSDeviceStateConnecting,
    MFSDeviceStateConnected,
    MFSDeviceStatePreparing,
    MFSDeviceStateReady,
    MFSDeviceStateOTA,
    MFSDeviceStateDisconnecting
};

/*!
 *  @protocol MFSDeviceDelegate
 *
 *  @description    The delegate of a MFSDevice object must adopt the <code>MFSDeviceDelegate</code> protocol. The
 *                  single required method is used to notify when the connection dropped unexpectedly.
 *
 */
@protocol MFSDeviceDelegate <NSObject>

@required

/*!
 *  @method shineConnectionDropped:error:
 *
 *  @description Invoked when the connection is dropped unexpectedly.
 *
 *  @param shine    the device in question.
 *  @param error    reason of the connection drop.
 */
- (void)shineConnectionDropped:(MFSDevice *)shine error:(NSError *)error;

- (void)device:(MFSDevice *)device didUpdateButtonEvent:(MFSButtonEventType)buttonEvent extraInfo:(NSDictionary *)extraInfo;

/*!
 *  @method device:didUpdateUAppNotification:error
 *
 *  @description Invoked when the device is recieved an uapp notification.
 *
 *  @param device               the device in question.
 *  @param uAppNotification     the UApp in question.
 *  @param error                reason of the connection drop.
 */
- (void)device:(MFSDevice *)device didUpdateUAppNotification:(MFSUAppNotification *)uAppNotification error:(NSError *)error;

@end

/*!
 *  @class MFSDevice
 *
 *  @description Represents Shines that has been discovered. Each Shine is identified by an unique serial number.
 *
 *              This class provide as easy way to interact with Shine, including playing LED animation,
 *              getting and updating configuration, syncing activity data and upgrading Shine's
 *              firmware.
 *
 */
@interface MFSDevice : NSObject 

/*!
 *  @property serialNumber
 *
 *  @description Shine's unique serial number.
 *
 */
@property (nonatomic, readonly, copy) NSString *serialNumber;

/*!
 *  @property firmwareVersion
 *
 *  @description Current firmware's version number. Only available when the device has been ready.
 *
 */
@property (nonatomic, readonly, copy) NSString *firmwareVersion;

/*!
 *  @property modelNumber
 *
 *  @description Device's model number. Only available when the device has been ready.
 *
 */
@property (nonatomic, readonly, copy) NSString *modelNumber;

/*!
 *  @property deviceName
 *
 *  @description Device's Bluetooth name.
 *
 */
@property (nonatomic, readonly, copy) NSString *deviceName;

/*!
 *  @property deviceFamily
 *
 *  @description Please refer to MFSDeviceFamily for list of all device family.
 */
@property (nonatomic, readonly) MFSDeviceFamily deviceFamily;

/*!
 *  @property state
 *
 *  @description Current state of the session.
 *
 *  @see        MFSDeviceState
 */
@property (nonatomic, readonly) MFSDeviceState state;

/*!
 *  @property state
 *
 *  @description Current Device's uapp system version.
 *
 *  @see        MFSUAppSystemVersion
 */
@property (nonatomic, readonly) MFSUAppSystemVersion uappSystemVersion;

/*!
 *  @property delegate
 *
 *  @description    The delegate object that will receive connection events.
 *
 *  @see            MFSDeviceDelegate
 */
@property (nonatomic, weak) id<MFSDeviceDelegate> delegate;

/*!
 *  @property dataCollectionTags
 *
 *  @description List of current tags for Data collection session.
 */
@property (nonatomic, readonly) NSSet *dataCollectionTags;

/*!
 *  @method prepareWithCompletion:completion:
 *
 *  @param completion   completionBlock to be invoked once the operation end.
 *
 *  @description         Getting ready for other operations.
 */
- (void)prepareWithCompletion:(MFSPrepareCompletion)completion;

/*!
 *  @method setMultipleAlarms:
 *
 *  @param alarms           List of alarms to be set on device.
 *  @param completion       completionBlock to be invoked once the operation end.
 *
 *  @description:           Set Multi-Alarm to device.
 */
- (void)setMultipleAlarms:(NSArray<MFSAlarm *> *)alarms
               completion:(MFSSetMultipleAlarmsCompletion)completion;

/*!
 *  @method verifyMultipleAlarmsWithCompletion:
 *
 *  @param completion       completionBlock to be invoked once the operation end.
 *  @param totalAlarm       The number of total alarm to calculate the frame length.
 *
 *  @description:           App can use the verify data command to compare the current multi-alarm frame between app and device.
 */
- (void)verifyMultipleAlarmsWithTotalAlarm:(uint8_t)totalAlarm
                                completion:(MFSVerifyMultipleAlarmsCompletion)completion;

/*!
 *  @method syncWithDataHandler:completion:extraInfo:
 *
 *  Read activity data on device.
 *
 *  @param syncDataHandler to retrieve each batch of activities.
 *  @param completion      completionBlock to be invoked once the operation end.
 *  @param options         A sync's options, which identifies the sync flow.
 
 *  @see MFSSyncResumeEnabledKey.       (Default is NO)
 *  @see MFSSyncProgressKey.
 *  @see MFSSkipReadActivityFilesKey.   (Default is NO)
 *  @see MFSSkipEraseActivityFilesKey.  (Default is NO)
 */
- (void)syncWithDataHandler:(MFSSyncDataHandler)syncDataHandler
                 completion:(MFSSyncCompletion)completion
                    options:(NSDictionary *)options;

/*!
 *  @method otaToFirmware:progressHandler:completion:
 *
 *  @param firmware           firmware.
 *  @param options            options key for OTA.
 *  @param progressHandler    invoked when the progress changed.
 *  @param completion         completionBlock to be invoked once the operation end.
 *
 *  @description Flash new firmware to Shine.
 *  @Options:
 *           MFSSkipResumeOTAKey. (Default is NO)
 *
 */
- (void)otaToFirmware:(MFSFirmware *)firmware
              options:(NSDictionary *)options
      progressHandler:(MFSDataTransferProgressHandler)progressHandler
           completion:(MFSOTACompletion)completion;

/*!
 *  @method getConfigurationWithCompletion:completion:
 *
 *  @param completion   completionBlock to be invoked once the operation end.
 *  @param options      Options key to get device configuration.
 *
 *  @description        Get current configuration of Shine.
 *
 *  @Options:
 *           MFSConfigurationTimeKey
 *           MFSConfigurationGoalKey
 *           MFSConfigurationActivityPointKey
 *           MFSConfigurationTripleTapKey
 *           MFSConfigurationClockStateKey
 *           MFSConfigurationActivityTaggingKey
 *           MFSConfigurationBatteryKey
 *           MFSConfigurationCurrentStepsKey
 *           MFSConfigurationGoalInStepsKey
 *           MFSConfigurationWristFlickKey
 *           MFSConfigurationBoltGroupIDKey
 *           MFSConfigurationBoltPasscodeKey
 *           MFSConfigurationFlashButtonModeKey
 */
- (void)getConfigurationWithCompletion:(MFSGetConfigurationCompletion)completion
                               options:(NSArray *)options;

/*!
 *  @method updateConfiguration:completion:
 *
 *  @param configurationUpdate    new configuration to be applied.
 *  @param completion             completionBlock to be invoked once the operation end.
 *
 *  @description Update Shine's configuration.
 */
- (void)updateConfiguration:(MFSConfigurationUpdate *)configurationUpdate
                 completion:(MFSUpdateConfigurationCompletion)completion;


- (void)changeSerialNumberWithSerialNumber:(NSString *)serialNumber
                                completion:(MFSChangeSerialNumberCompletion)completion;

/*!
 *  @method playAnimationWithCompletion:completion:
 *
 *  @param completion   completionBlock to be invoked once the operation end.
 *
 *  @description Play LED animation on Shine. Used to notify users that the Shine is talking with the application.
 */
- (void)playAnimationWithCompletion:(MFSAnimationCompletion)completion;

/*!
 *  @method stopAnimationWithCompletion:completion:
 *
 *  @param completion   completionBlock to be invoked once the operation end.
 *
 *  @description Stop LED animation on Shine. Should be called before disconnecting with Shine.
 */
- (void)stopAnimationWithCompletion:(MFSStopAnimationCompletion)completion;

/*!
 *  @method readRSSIWithCompletion:completion:
 *
 *  @param completion   completionBlock to be invoked once the operation end.
 *
 *  @description Read the RSSI value, which indicating the strength of the signal.
 *               Its value ranging from -127 to 20 and 127 means not available.
 */
- (void)readRSSIWithCompletion:(MFSReadRSSICompletion)completion;

/*!
 *  @method getConnectionParametersWithCompletion:
 *
 *  @param completion   completionBlock to be invoked once the operation end.
 *
 *  @description Get current connection parameters.
 */
- (void)getConnectionParametersWithCompletion:(MFSGetConnectionParametersCompletion)completion;

/*!
 *  @method updateConnectionParameters:completion:
 *
 *  @param connectionParameters new connection parameters.
 *  @param completion           completionBlock to be invoked once the operation end.
 *
 *  @description Get current connection parameters.
 */
- (void)updateConnectionParameters:(MFSConnectionParameters *)connectionParameters
                        completion:(MFSUpdateConnectionParametersCompletion)completion;

/*!
 *  @method activateWithCompletion:completion:
 *
 *  @param completion   completionBlock to be invoked once the operation end.
 *
 *  @description Activate Flash. This method only works with Flash. You will get an error message when invoking this on Shine.
 */
- (void)activateWithCompletion:(MFSActivationCompletion)completion;

/*!
 *  @method stopRunningOperation
 *
 *  @description Interrupt current operation. The interrupted operation's completion block will be invoked with an error.
 */
- (void)stopRunningOperation;

/*!
 *  @method                     getCurrentActions
 *
 *  @description                Returns the list of current action ids.
 */
- (NSArray<NSNumber *>*)getCurrentActions;

/*!
 *  @method                     interruptAction
 *
 *  @param actionId     actionId.
 *
 *  @description                Stop the phaseController which specified by actionId. (Note: it's not remove the phaseController from Parallel list).
 *
 *  @return                     Returns NO if the action id is not exists in Parallel list. Otherwise, return YES.
 */
- (BOOL)interruptAction:(MFSPhaseActionId)actionId;

/*!
 *  Retrieve hardware log on device.
 *
 *  @param completion      completionBlock to be invoked once the operation end.
 *  @param options         A sync's options, which identifies the retrieve flow.
 *
 *  @see MFSSkipEraseHardwareLogKey.    (Default is NO)
 *  @see MFSSkipReadHardwareLogKey.     (Default is NO)
 */
- (void)retrieveHardwareLogWithCompletion:(MFSRetrieveHardwareLogCompletion)completion
                                  options:(NSDictionary *)options;

/*!
 *  Add a data collection tag to current session.
 *
 *  @param tag Tag to be added to data collection session.
 */
- (void)addDataCollectionTag:(NSString *)tag;

/*!
 *  @method sendDebugRequestWithComletion:
 *
 *  @param completion   completionBlock to be invoked once the operation end.
 *
 *  @description Send a custom request to the device.
 */
- (void)sendCustomRequest:(MFSCustomRequest *)request
               completion:(MFSSendCustomRequestCompletion)completion;

/*!
 *  @method isSupportFeature:
 *
 *  @param feature to check.
 *
 *  @description check if device supports the feature.
 */
- (BOOL)isSupportFeature:(MFSSuppportedFeature)feature;

/*!
 *  @method enterFastConnectionModeWithCompletion:
 *
 *  @description Auto switch the device to fast connection based on the firmware version.
 */
- (void)enterFastConnectionModeWithCompletion:(MFSUpdateConnectionParametersCompletion)completion;

@end
