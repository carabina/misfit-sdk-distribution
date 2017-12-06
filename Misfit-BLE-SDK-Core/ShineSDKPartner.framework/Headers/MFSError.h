//
//  MFSThrowedError.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Uy Nguyen Long on 12/21/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MFSDevice+ActionId.h"
#import "MFSRequest.h"

typedef NS_ENUM(UInt8, MFSFailureDomain)
{
    MFSFailureDomainNone                                         = 0,
    MFSFailureDomainDeviceError                                  = 1,
    MFSFailureDomainPhaseActionError                             = 2,
};

typedef NS_ENUM(UInt8, MFSFailureReason)
{
    MFSFailureReasonNone                                        = 0,
    MFSFailureReasonDeviceWrongState                            = 1,
    MFSFailureReasonDeviceBusy                                  = 2,
    MFSFailureReasonDeviceInvalidFirmware                       = 3,
    MFSFailureReasonDeviceUnsupportedFirmware                   = 4,
    MFSFailureReasonDeviceUnknowFirmwareError                   = 5,
    MFSFailureReasonDeviceDeprecatedFirmwareError               = 6,

    MFSFailureReasonRequestValueOutOfRange                      = 11,
    MFSFailureReasonRequestFailed                               = 12,
    MFSFailureReasonRequestTimedOut                             = 13,
    MFSFailureReasonUnsupportedRequest                          = 14,

    MFSFailureReasonResponseFailed                              = 15,
    MFSFailureReasonResponseDataParsingError                    = 16,

    MFSFailureReasonInvalidParams                               = 17,
    MFSFailureReasonDataTransferFailed                          = 18,
    MFSFailureReasonInterrupted                                 = 19,
    MFSFailureReasonResourceUnavailable                         = 20,
    MFSFailureReasonBLEStackError                               = 21,
    MFSFailureReasonUnexpectedFlow                              = 22,

    MFSFailureReasonUnknown                                     = 99
};

@interface MFSError : NSError

@property (class, nonatomic, readonly) NSString* phaseActionErrorDomain;
@property (class, nonatomic, readonly) NSString* deviceErrorDomain;

- (NSString *)description;
- (NSDictionary *)keyValueDescription;

- (BOOL)isEqualToFailureDomain:(MFSFailureDomain)comparedFailureDomain;
- (BOOL)isEqualToFailureReason:(MFSFailureReason)comparedFailureReason;
- (BOOL)isEqualToFailureAction:(MFSPhaseActionId)comparedFailureAction;
- (BOOL)isEqualToFailureStep:(MFSEventId)comparedFailureStep;
- (BOOL)isEqualToFailureDomain:(MFSFailureDomain)comparedFailureDomain
                 failureAction:(MFSPhaseActionId)comparedFailureAction
                   failureStep:(MFSEventId)comparedFailureStep
                 failureReason:(MFSFailureReason)comparedFailureReason;

@end
