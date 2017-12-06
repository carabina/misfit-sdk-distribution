//
//  MFSError.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 8/9/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#ifndef MFSError_h
#define MFSError_h

#pragma mark - Notification Error.
FOUNDATION_EXPORT NSString * const MFSNotificationErrorDomain;

typedef NS_ENUM(NSUInteger, MFSNotificationErrorCode)
{
    MFSNotificationUnsupportedApplicationError          = 2000,
    MFSNotificationRuleIndexOutOfRangeError             = 2001,
    MFSNotificationRuleLengthOutOfRangeError            = 2002,
    MFSNotificationReachedMaxLedBlinkError              = 2003,
    MFSNotificationReachedMaxVibeError                  = 2004,
    MFSNotificationUnsupportedColorError                = 2005,
    MFSNotificationDurationOutOfRangeError              = 2006,
    MFSNotificationReachedMaxHandAnimSettingError       = 2007,
    MFSNotificationDegreesOutOfRangeError               = 2008,
    MFSNotificationHandAnimEmptyError                   = 2009,
    MFSNotificationMissingFromContactError              = 2010,
    MFSNotificationUnsupportedFromContactError          = 2011,
    MFSNotificationUnsupportedKeywordError              = 2012,
    
    MFSNotificationUnsupportedDeviceError               = 2013,
};

#pragma mark - MFSManager Error.
FOUNDATION_EXPORT NSString * const MFSDeviceErrorDomain;

typedef NS_ENUM(NSUInteger, MFSDeviceErrorCode)
{
    MFSDeviceNotConnectedError                          = 3000,
    MFSDeviceNotReadyError                              = 3001,
    MFSDeviceBusyError                                  = 3002,
    MFSDeviceInternalError                              = 3003,
    MFSDeviceIsAlreadyReadyError                        = 3004,
    MFSDeviceUnknownFirmwareError                       = 3005,
    MFSDeviceInvalidFirmwareError                       = 3006,
    MFSDeviceUnsupportedFirmwareError                   = 3007,
    MFSDeviceDeprecatedFirmwareError                    = 3008,
    MFSDeviceServicesInvalidatedError                   = 3009,
    MFSDeviceIllegalParametersError                     = 3010,
    MFSDevicePrepareTimeoutError                        = 3011,
    MFSDeviceUnexpectedError                            = 3099
};

#pragma mark - MFSManager Error.
FOUNDATION_EXPORT NSString * const MFSManagerErrorDomain;

typedef NS_ENUM(NSUInteger, MFSManagerErrorCode)
{
    MFSManagerServiceIsNotReadyError    = 4000,
    MFSManagerIllegalParameters         = 4001,
    MFSManagerDeviceIsWrongState        = 4002,
    MFSManagerDeviceIsNullPeripheral    = 4003,
    MFSManagerUnexpectedError           = 4099
};

#endif /* MFSError_h */
