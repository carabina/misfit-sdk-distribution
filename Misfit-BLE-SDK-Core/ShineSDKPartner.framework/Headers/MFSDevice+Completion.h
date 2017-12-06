//
//  MFSDevice+Completion.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Minh Nguyen on 12/29/14.
//  Copyright (c) 2014 Misfit Wearables. All rights reserved.
//

#import "MFSConfiguration.h"
#import "MFSConnectionParameters.h"
#import "MFSStreamingParameters.h"
#import "MFSCustomRequest.h"
#import "MFSNotificationFilter.h"
#import "MFSConfigurationUpdate.h"
#import "MFSCurrentHandPositions.h"
#import "MFSEventMapping.h"
#import "MFSError.h"
#import "MFSSwimmingLapCountingLicense.h"
/*!
 *  @param error    cause of the failure. NIL if the operation succeeded.
 */
typedef void (^MFSActivationCompletion)(NSError *error);

/*!
 *  @param modelNumber       device's model number.
 *  @param firmwareVersion   firmware version number on Shine.
 *  @param error             cause of the failure. NIL if the operation succeeded.
 */
typedef void (^MFSPrepareCompletion)(NSString *modelNumber, NSString *firmwareVersion, NSError *error);

/*!
 *  Invoked for each batch of activities received.
 *
 *  @param syncData     a batch of activities data recorded on Shine.
 */
typedef void (^MFSSyncDataHandler)(NSData *syncData, NSDictionary *extraInfo);

/*!
 *  Invoked once the whole operation succeeds or fails.
 *
 *  @param CRC calculated from SDK.
 *  @param error cause of the failure. NIL if the operation succeeded.
 */
typedef void (^MFSSetMultipleAlarmsCompletion)(uint32_t CRC, NSError *error);

/*!
 *  Invoked once the whole operation succeeds or fails.
 *
 *  @param error cause of the failure. NIL if the operation succeeded.
 */
typedef void (^MFSDeleteMultipleAlarmsCompletion)(NSError *error);

/*!
 *  Invoked once the whole operation succeeds or fails.
 *
 *  @param frameCRC : CRC from device.
 *  @param error cause of the failure. NIL if the operation succeeded.
 */
typedef void (^MFSVerifyMultipleAlarmsCompletion)(uint32_t frameCRC, NSError *error);

/*!
 *  Invoked once the whole operation succeeds or fails.
 *
 *  @param error cause of the failure. NIL if the operation succeeded.
 */
typedef void (^MFSSyncCompletion)(NSError *error);

/*!
 *  Invoked once the firmware update's progress changed.
 *
 *  @param progress firmware update progress.
 */
typedef void (^MFSDataTransferProgressHandler)(float progress);

/*!
 *  Invoked once the whole operation succeeds or fails.
 *
 *  @param error    cause of the failure. NIL if the operation succeeded.
 */
typedef void (^MFSOTACompletion)(NSError *error);

/*!
 *  @param shineConfiguration   configuration on Shine.
 *  @param error                cause of the failure. NIL if the operation succeeded.
 */
typedef void (^MFSGetConfigurationCompletion)(MFSConfiguration *shineConfiguration, NSError *error);

/*!
 *  @param updatedConfigs    value of configuration will change if and only if it's set successful.
 *  @param error                    cause of the failure. NIL if the operation succeeded.
 */
typedef void (^MFSUpdateConfigurationCompletion)(MFSConfigurationUpdate *updatedConfigs, NSError *error);

/*!
 *  @param error    cause of the failure. NIL if the operation succeeded.
 */
typedef void (^MFSAnimationCompletion)(NSError *error);

/*!
 *  @param error    cause of the failure. NIL if the operation succeeded.
 */
typedef void (^MFSStopAnimationCompletion)(NSError *error);

/*!
 *  @param rssi     signal strength.
 *  @param error    cause of the failure. NIL if the operation succeeded.
 */
typedef void (^MFSReadRSSICompletion)(NSInteger rssi, NSError *error);

typedef void (^MFSChangeSerialNumberCompletion)(NSError *error);

/*!
 *  @param connectionParameters current Bluetooth connection parameters.
 *  @param error                cause of the failure. NIL if the operation succeeded.
 */
typedef void (^MFSGetConnectionParametersCompletion)(MFSConnectionParameters *connectionParameters, NSError *error);

/*!
 *  @param connectionParameters updated Bluetooth connection parameters.
 *  @param error                cause of the failure. NIL if the operation succeeded.
 */
typedef void (^MFSUpdateConnectionParametersCompletion)(MFSConnectionParameters *connectionParameters, NSError *error);

typedef void (^MFSMapButtonEventCompletion)(NSError *error);
typedef void (^MFSPlayButtonEventAnimationCompletion)(NSError *error);

typedef void (^MFSFileStreamCompletion)(NSError *error);
typedef void (^MFSLegacyStreamingHandler)(MFSCharacteristicId characteristic, uint8_t *bytes , uint32_t length);
typedef void (^MFSButtonFileStreamHandler)(MFSButtonEventType type);

typedef void (^MFSSetFileStreamForButtonControlConfigurationCompletion)(MFSStreamingParameters *fileStreamParamters, NSError *error);

typedef void (^MFSGetFlashButtonModeCompletion)(MFSFlashButtonMode mode, NSError *error);
typedef void (^MFSSetFlashButtonModeCompletion)(NSError *error);

typedef void (^MFSGetBoltGroupIDCompletion)(NSNumber *groupID, NSError *error);
typedef void (^MFSSetBoltGroupIDCompletion)(NSError *error);

typedef void (^MFSGetBoltPasscodeCompletion)(NSData *passcode, NSError *error);
typedef void (^MFSSetBoltPasscodeCompletion)(NSError *error);

typedef void (^MFSRetrieveHardwareLogCompletion)(NSData *data, NSError *error);

/*!
 *  @param error    cause of the failure. NIL if the operation succeeded.
 */
typedef void (^MFSSendCustomRequestCompletion)(NSError *error);

/*!
 *  @param error    cause of the failure. NIL if the operation succeeded.
 */
typedef void (^MFSSetNotificationFilteringCompletion)(NSError *error);
typedef void (^MFSClearNotificationFilteringCompletion)(NSError *error);
typedef void (^MFSSaveAllNotificationFilteringCompletion)(NSError *error);
typedef void (^MFSGetNotificationFilteringCompletion)(MFSNotificationFilter *filter, NSError *error);
typedef void (^MFSGetAllNotificationFilteringCompletion)(NSDictionary *filters, NSError *error);
/*!
 *  @param error    cause of the failure. NIL if the opereration succeeded.
 */
typedef void (^MFSClearAllNotificationFilteringCompletion)(NSError *error);


typedef void (^MFSPlayLEDCompletion)(NSError *error);
typedef void (^MFSPlayVibrationCompletion)(NSError *error);

typedef void (^MFSSetEventMappingCompletion)(NSError *error);
typedef void (^MFSGetEventMappingForButtonEventCompletion)(MFSEventMapping *eventMapping, NSError *error);
typedef void (^MFSUnmapEventCompletion)(NSError *error);

typedef void (^MFSPhaseControllerCompletion)(NSError *error);

typedef void (^MFSRefreshDeviceCompletion)(NSError *error);

#pragma mark - SAM
typedef void (^MFReleaseControlHandsCompletion)(NSError *error);
typedef void (^MFSRequestControlHandsCompletion)(NSError *error);
typedef void (^MFSSetCalibratedHandPositionCompletion)(NSError *error);
typedef void (^MFSMoveHandsCompletion)(NSError *error);
typedef void (^MFSGetCurrentHandPositions)(MFSCurrentHandPositions *handPositions, NSError *error);
typedef void (^MFSPlayNotificationAnimationCompletion)(NSError *error);
typedef void (^MFSPlayHandAnimationCompletion)(NSError *error);
typedef void (^MFSPlayLedAnimationCompletion)(NSError *error);

#pragma mark - Pluto
/*!
 *  Invoked once Get swimming lap counting license succeeds or fails
 *
 *  @param response swimming lap counting license response
 *  @param error    cause of the failure. NIL if the operation succeeded.
 */
typedef void (^MFSGetSwimmingLapCountingLicenseCompletion)(MFSSwimmingLapCountingLicense *response, NSError *error);

/*!
 *  Invoked once Set swimming lap counting license succeeds or fails
 *
 *  @param error cause of the failure. NIL if the operation succeeded.
 */
typedef void (^MFSSetSwimmingLapCountingLicenseCompletion)(NSError *error);

/*!
 *  Invoked once Set swimming lap counting triple tap mode succeeds or fails
 *
 *  @param error cause of the failure. NIL if the operation succeeded.
 */
typedef void (^MFSSetSwimmingLapCountingTripleTapModeCompletion)(NSError *error);

#pragma mark - Micro App
typedef void (^MFSMicroAppDataTransferCompletion)(NSError *error);

typedef void (^MFSTaskCompletion)(NSError *error);
