//
//  MFSFirmwareManager.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Minh Nguyen on 1/12/15.
//  Copyright (c) 2015 Misfit Wearables. All rights reserved.
//

#import "MFSFirmware.h"

@interface MFSFirmwareManager : NSObject

+ (MFSFirmwareManager *)defaultManager;

- (void)downloadLatestFirmwareForDeviceModel:(NSString *)deviceModel
                                   onSuccess:(void (^)(MFSFirmware *firmware))success
                                   onFailure:(void (^)(NSError *error))failure;

- (void)downloadFirmwareWithVersion:(NSString *)firmwareVersion
                          onSuccess:(void (^)(MFSFirmware *firmware))success
                          onFailure:(void (^)(NSError *error))failure;

- (void)verifyFirmwareVersion:(NSString *)firmwareVersion
                    onSuccess:(void (^)(void))success
                    onFailure:(void (^)(NSError *error))failure;

- (void)loadLocalFirmwareWithVersion:(NSString *)firmwareVersion
                          completion:(void (^)(MFSFirmware *firmware))completion;

- (void)loadLocalFirmwaresWithCompletion:(void (^)(NSArray *firmwares))completion;

@end
