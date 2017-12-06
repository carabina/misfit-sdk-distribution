//
//  MFSDevice+Constants.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 3/27/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import "MFSConstant+SAM.h"
#import "MFSConstant+Pluto.h"
#import "MFSConstant+ButtonEvent.h"
#import "MFSConstant+ANCS.h"


#ifndef MFSDevice_Constants_h
#define MFSDevice_Constants_h
#define MFSDeprecatedWithMessage(message) __attribute((deprecated((message))))
#define MFSDeprecated __attribute__((deprecated))
#pragma mark - SDK Notification

/*!
 * Notification identifier for MFSDataCollectionManager's logs new session file created. This notification is sent to the default NSNotificationCenter.
 */
FOUNDATION_EXPORT NSString * const MFSDataCollectionSessionStoredNotification;

/*!
 *  Notification identifier for MFSDataCollectionManager's logs pushing event . This notification is
 *  sent to the default NSNotificationCenter.
 */
FOUNDATION_EXPORT NSString * const MFSDataCollectionSessionUploadedNotification;

/*!
 *  Notification identifier for ANCS debug event. This notification is
 *  sent to the default NSNotificationCenter.
 */
FOUNDATION_EXPORT NSString * const MFSANCSDebugMessageNotification;

#pragma mark - Sync & Hardware log
/*!
 * An ExtraInfo key identifying the SyncProgress in MFSSyncDataHandler. The related value
 * is a NSNumber object, which range from 0.0f to 1.0f.
 */
FOUNDATION_EXPORT NSString * const MFSSyncProgressKey;

/*!
 * An ExtraInfo key in sync, which identifies sync with resume mechanism.
 */
FOUNDATION_EXPORT NSString * const MFSSyncResumeEnabledKey;

/*!
 *  An ExtraInfo key in sync, which identifies sync with delete activity file.
 */
FOUNDATION_EXPORT NSString * const MFSSkipEraseActivityFilesKey;

/*!
 *  An ExtraInfo key in sync, which identifies sync with read activity file.
 */
FOUNDATION_EXPORT NSString * const MFSSkipReadActivityFilesKey;

/*!
 *  An ExtraInfo key in retrive hardware log, which identifies retrive with delete hardware log file.
 */
FOUNDATION_EXPORT NSString * const MFSSkipEraseHardwareLogKey;

/*!
 *  An ExtraInfo key in retrive hardware log, which identifies retrive with read hardware log file.
 */
FOUNDATION_EXPORT NSString * const MFSSkipReadHardwareLogKey;

#pragma mark - Data collection

/*!
 *  An ExtraInfo key in set event mapping, which identifies whether SDK will automatically unmap events on the button or not.
 */
FOUNDATION_EXPORT NSString * const MFSOverrideEventMappingKey;

#pragma mark - Data collection

/*!
 * An ExtraInfo key in MFSDataCollectionSessionUploadedNotification's userInfo, which identifies the total session files left after uploaded a file.
 */
FOUNDATION_EXPORT NSString *const MFSDataCollectionSessionFilesLeftKey;

/*!
 * An ExtraInfo key in MFSDataCollectionSessionUploadedNotification's userInfo, which identifies the uploaded session file's name.
 */
FOUNDATION_EXPORT NSString *const MFSDataCollectionSessionNameKey;

/*!
 * An ExtraInfo key in MFSDataCollectionSessionUploadedNotification's userInfo, which identifies the uploaded session id in data collection server.
 */
FOUNDATION_EXPORT NSString *const MFSDataCollectionSessionIdKey;

/*!
 * An ExtraInfo key in MFSDataCollectionSessionUploadedNotification's userInfo, which identifies the uploaded session id in data collection server.
 */
FOUNDATION_EXPORT NSString *const MFSDataCollectionSessionResponseError;

#pragma mark - Options key for configurations

/*!
 *  An option key in get device's configuration, which identifies get/set device time.
 */
FOUNDATION_EXPORT NSString *const MFSConfigurationTimeKey;

/*!
 *  An option key in get device's configuration, which identifies get/set daily goal.
 */
FOUNDATION_EXPORT NSString *const MFSConfigurationGoalKey;

/*!
 *  An option key in get device's configuration, which identifies get/set daily activity point.
 */
FOUNDATION_EXPORT NSString *const MFSConfigurationActivityPointKey;

/*!
 *  An option key in get device's configuration, which identifies get/set striple tap.
 */
FOUNDATION_EXPORT NSString *const MFSConfigurationTripleTapKey;

/*!
 *  An option key in get device's configuration, which identifies get/set clock state.
 */
FOUNDATION_EXPORT NSString *const MFSConfigurationClockStateKey;

/*!
 *  An option key in get device's configuration, which identifies get/set activity tagging state.
 */
FOUNDATION_EXPORT NSString *const MFSConfigurationActivityTaggingKey;

/*!
 *  An option key in get device's configuration, which identifies get/set device's battery.
 */
FOUNDATION_EXPORT NSString *const MFSConfigurationBatteryKey;

/*!
 *  An option key in get device's configuration, which identifies get/set current estimated steps.
 */
FOUNDATION_EXPORT NSString *const MFSConfigurationCurrentStepsKey;

/*!
 *  An option key in get device's configuration, which identifies get/set daily goal in step.
 */
FOUNDATION_EXPORT NSString *const MFSConfigurationGoalInStepsKey;

/*!
 *  An option key in get device's configuration, which identifies get/set wrist flick state.
 */
FOUNDATION_EXPORT NSString *const MFSConfigurationWristFlickKey;

/*!
 *  An option key in get device's configuration, which identifies get/set goal tracking.
 */
FOUNDATION_EXPORT NSString * const MFSConfigurationGoalTrackingKey;

/*!
 *  An option key in get device's configuration, which identifies get/set countdown settings.
 */
FOUNDATION_EXPORT NSString * const MFSConfigurationCountdownSettingsKey;

/*!
 *  An option key in get device's configuration, which identifies get/set bolt group Id.
 */
FOUNDATION_EXPORT NSString * const MFSConfigurationBoltGroupIDKey;

/*!
 *  An option key in get device's configuration, which identifies get/set bolt passcode.
 */
FOUNDATION_EXPORT NSString * const MFSConfigurationBoltPasscodeKey;

/*!
 *  An option key in get device's configuration, which identifies get/set flash button mode.
 */
FOUNDATION_EXPORT NSString * const MFSConfigurationFlashButtonModeKey;

/*!
 *  An option key in get device's configuration, which identifies get/set adta advertising.
 */
FOUNDATION_EXPORT NSString * const MFSConfigurationDataAdvertisingKey;

/*!
 *  An option key in get device's configuration, which identifies get/set Second Time zone.
 */
FOUNDATION_EXPORT NSString * const MFSConfigurationSecondTimezoneKey;

/*!
 *  An option key in get device's configuration, which identifies get/set vibe strength.
 */
FOUNDATION_EXPORT NSString * const MFSConfigurationVibeStrengthKey;

FOUNDATION_EXPORT NSString * const MFSButtonEventExtraInfoStepKey;

FOUNDATION_EXPORT NSString * const MFSButtonEventExtraInfoPointKey;

#pragma mark - OTA

/*!
 *  An option key in OTA, which identifies skip resume at last failed OTA.
 */
FOUNDATION_EXPORT NSString * const MFSSkipResumeOTAKey;

#pragma mark - MFSLogLevel

typedef NS_OPTIONS(NSUInteger, MFSLogLevel)
{
    MFSLogLevelNone     = 1 << 0,
    MFSLogLevelVerbose  = 1 << 1,
    MFSLogLevelDebug    = 1 << 2,
    MFSLogLevelInfo     = 1 << 3,
    MFSLogLevelWarning  = 1 << 4,
    MFSLogLevelError    = 1 << 5
};

#pragma mark - Flash Button

typedef NS_ENUM(NSUInteger, MFSFlashButtonMode) {
    MFSFlashButtonModeUnknown = 0,
    MFSFlashButtonModeSelfie = 1,
    MFSFlashButtonModeMusic = 2,
    MFSFlashButtonModePresentation = 3,
    MFSFlashButtonModeApplication = 4,
    MFSFlashButtonModeActivityTracking = 5,
    MFSFlashButtonModeBoltControl = 6
};

#pragma mark - Device Family

/*!
 *  @enum MFSDeviceFamily
 *
 *  @description Represents supported device families.
 *
 *  @constant MFSDeviceFamilyUnknown    Unknown device model. Some features might not work properly.
 *                                      Please update ShineSDK to get support for the new model.
 *  @constant MFSDeviceFamilyShine      Shine.
 *  @constant MFSDeviceFamilyFlash      Flash.
 *  @constant MFSDeviceFamilyButton     Flash Link.
 *  @constant MFSDeviceFamilyShine2     Shine 2.
 *  @constant MFSDeviceFamilyShineMKII  Speedo.
 *  @constant MFSDeviceFamilySilvretta  Silvretta.
 *  @constant MFSDeviceFamilySwarovski  Swarovski.
 *  @constant MFSDeviceFamilyBMW        Ray.
 *  @constant MFSDeviceFamilyQMotion    Q-Motion.
 *  @constant MFSDeviceFamilyRMM        Round mini.
 *  @constant MFSDeviceFamilySAM        Hybrid watch
 */
typedef NS_ENUM(NSUInteger, MFSDeviceFamily)
{
    MFSDeviceFamilyUnknown      = 0,
    MFSDeviceFamilyShine        = 1,
    MFSDeviceFamilyFlash        = 2,
    MFSDeviceFamilyButton       = 3,
    MFSDeviceFamilyShineMKII    = 4,
    MFSDeviceFamilyShine2       = 5,
    MFSDeviceFamilySilvretta    = 6,
    MFSDeviceFamilySwarovski    = 7,
    MFSDeviceFamilyBMW          = 8,
    MFSDeviceFamilyQMotion      = 9,
    MFSDeviceFamilyRMM          = 10,
    MFSDeviceFamilySAM          = 11,
    MFSDeviceFamilySAMSlim      = 12,
    MFSDeviceFamilySAMMini      = 13
};

typedef NS_ENUM(NSUInteger, MFSBluetoothState)
{
    MFSBluetoothStateUnknown = 0,
    MFSBluetoothStateResetting,
    MFSBluetoothStateUnsupported,
    MFSBluetoothStateUnauthorized,
    MFSBluetoothStatePoweredOff,
    MFSBluetoothStatePoweredOn,
};

typedef NS_ENUM(NSUInteger, MFSSuppportedFeature)
{
    MFSSuppportedFeatureUnMapOnButton,
    MFSSuppportedFeatureStreamingAsync,
    MFSSuppportedFeatureMicroApp
};

#pragma mark - UApp

typedef NS_ENUM (uint8_t, MFSUAppId)
{
    MFSUAppUndefined            = 0,
    MFSUAppMusicControl         = 1,
    MFSUAppActivityTagging      = 2,
    MFSUAppGoalTracking         = 3,
    MFSUAppDate                 = 4,
    MFSUAppTime2                = 5,
    MFSUAppAlert                = 6,
    MFSUAppAlarm                = 7,
    MFSUAppProgress             = 8,
    MFSUApp24h                  = 9,
    MFSUAppBoltControl          = 10,
    MFSUAppWeather              = 11,
    MFSUAppCommuteTime          = 12,
    MFSUAppSelfie               = 13,
    MFSUAppRingPhone            = 14,
    MFSUAppStopwatch            = 15
};

typedef NS_ENUM(uint8_t, MFSUAppVariantId)
{
    MFSUAppVariantUndefined       = 0,
    MFSUAppVariantStandard        = 1,
    MFSUAppVariantSweep           = 2,
    MFSUAppVariantSequenced       = 3,
    MFSUAppVariantPlayPause       = 4,
    MFSUAppVariantNext            = 5,
    MFSUAppVariantPrevious        = 6,
    MFSUAppVariantVolumeUp        = 7,
    MFSUAppVariantVolumeDown      = 8,
    MFSUAppVariantTravel          = 9,
    MFSUAppVariantETA             = 10,
};

#endif /* MFSDevice_Constants_h */
