//
//  MFSCustomRequest.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Luu Nguyen on 3/15/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import "MFSRequest.h"

@interface MFSCustomRequest: MFSRequest

@property (nonatomic, readonly, strong) NSString *requestName;

- (instancetype)initWithRequestData:(NSData *)rawRequestData
                        requestName:(NSString *)requestName
                            timeout:(NSTimeInterval)timeout
                     characteristic:(MFSCharacteristicId)characteristic;

- (void)handleResponseFromCharacteristic:(MFSCharacteristicId)characteristic
                                    data:(NSData *)bytes;

+ (MFSCustomRequest *)simpleRequestWithData:(NSData *)data
                                requestName:(NSString *)name
                                    timeout:(NSTimeInterval)timeout
                             characteristic:(MFSCharacteristicId)characteristic;

+ (MFSCustomRequest *)noResponseRequestWithData:(NSData *)data
                                    requestName:(NSString *)name
                                        timeout:(NSTimeInterval)timeout
                                 characteristic:(MFSCharacteristicId)characteristic;

+ (MFSCustomRequest *)multipleResponseRequestWithData:(NSData *)data
                                          requestName:(NSString *)name
                                              timeout:(NSTimeInterval)timeout
                                       characteristic:(MFSCharacteristicId)characteristic;


@end
