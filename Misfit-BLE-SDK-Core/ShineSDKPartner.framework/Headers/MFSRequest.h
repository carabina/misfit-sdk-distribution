//
//  MFSRequest.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Minh Nguyen on 3/11/14.
//  Copyright (c) 2014 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MFSEventHelper.h"
#import "MFSResponse.h"

typedef NS_ENUM(NSInteger, MFSCharacteristicId)
{
    MFSCharacteristicUnknown = -1,
    MFSCharacteristicDeviceConfiguration    = 0x0002,
    MFSCharacteristicFileControl            = 0x0003,
    MFSCharacteristicFileTransfer           = 0x0004,
    MFSCharacteristicAuthentication         = 0x0005,
    MFSCharacteristicStreaming              = 0x0006,
    MFSCharacteristicDeviceSettings         = 0x0007,
    
    // Device Infomation characteristic
    MFSCharacteristicModelNumber            = 0x2a24,
    MFSCharacteristicSerialNumber           = 0x2a25,
    MFSCharacteristicFirmwareVersion        = 0x2a26,
};

@interface MFSRequest : NSObject

@property (nonatomic) MFSEventId eventId;

@property (nonatomic, strong) NSString *name;

@property (nonatomic, strong) NSData *requestData;

@property (nonatomic, assign) NSTimeInterval timeout;

@property (nonatomic, getter=isCompleted) BOOL completed;

@property (nonatomic, assign) MFSCharacteristicId characteristic;

- (BOOL)isReceiveProperResponse;

- (BOOL)isWaitingForResponse;

/**
 *  Response from device. You have to assign value for this property in implementation of handleResponseFromCharacteristic:data:length method.
 *
 *  @return user-defined object represents for response from characteristic
 */
- (MFSResponse *)response;

/**
- (void)handleResponseFromCharacteristic:(NSString *)characteristicId
 *  Event will be trigger when request has been sent
 *
 *  @param succeed indicate whether request has been sent successful
 */
- (void)onRequestSentWithResult:(BOOL)succeed;

/**
 *  information about request for data collection
 *
 *  @return information about request for data collection in key-value format
 */
- (NSDictionary *)requestDescription;

/**
 *  information about response for data collection
 *
 *  @return information about request for data collection in key-value format
 */
- (NSDictionary *)responseDescription;

@end
