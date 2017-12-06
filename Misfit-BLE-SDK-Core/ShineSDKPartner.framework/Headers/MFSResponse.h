//
//  MFSResponse.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 5/1/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(uint32_t, MFSResponseCode)
{
    MFSResponseSuccess      = 0x00,
    MFSResponseError        = 0x01,
    MFSResponseMismatched   = 0x02,
    MFSResponseWrongCRC     = 0x03
};

@interface MFSResponse : NSObject

@property (nonatomic) MFSResponseCode result;
@property (nonatomic) NSMutableData *rawData;

/**
 *  Verify that the first byte of response matches a specific operation code
 *
 *  @param bytes         response byte sequence
 *  @param length        length of response byte sequence
 *  @param operationCode operation code to verify
 *
 *  @return MFSResponseSuccess or MFSResponseMismatched
 */
+ (MFSResponseCode)validateResponse:(uint8_t *)bytes
                             length:(uint32_t)length
                  withOperationCode:(uint8_t)operationCode;

/**
 *  Verify that the 2 first bytes of response match specific operation code and parameterId
 *
 *  @param bytes         response byte sequence
 *  @param length        length of response byte sequence
 *  @param operationCode operation code to verify
 *  @param parameterId   parameterId to verify
 *
 *  @return MFSResponseSuccess or MFSResponseMismatched
 */
+ (MFSResponseCode)validateResponse:(uint8_t *)bytes
                             length:(uint32_t)length
                  withOperationCode:(uint8_t)operationCode
                        parameterId:(uint8_t)parameterId;

/**
 *  Verify that the 3 first bytes of response match specific operation code, parameter ID and setting ID
 *
 *  @param bytes         response byte sequence
 *  @param length        length of response byte sequence
 *  @param operationCode operation code to verify
 *  @param parameterId   parameter ID to verify
 *  @param settingId     setting ID to verify
 *
 *  @return MFSResponseSuccess or MFSResponseMismatched
 */
+ (MFSResponseCode)validateResponse:(uint8_t *)bytes
                             length:(uint32_t)length
                  withOperationCode:(uint8_t)operationCode
                        parameterId:(uint8_t)parameterId
                          settingId:(uint8_t)settingId;

/**
 *  Verify that the very first bytes of response match specific header
 *
 *  @param bytes         response byte sequence
 *  @param length        length of response byte sequence
 *  @param headerBytes    header bytes to verify
 *  @param headerLength   length of header bytes
 *
 *  @return MFSResponseSuccess or MFSResponseMismatched
 */
+ (MFSResponseCode)validateResponse:(uint8_t *)bytes
                             length:(uint32_t)length
                     expectedHeader:(uint8_t *)headerBytes
                       headerLength:(uint32_t)headerLength;

@end
