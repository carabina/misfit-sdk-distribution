//
//  MFSFirmware.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Minh Nguyen on 1/12/15.
//  Copyright (c) 2015 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MFSFirmware : NSObject<NSCoding>

@property (nonatomic, readonly) NSString *firmwareVersion;
@property (nonatomic, readonly) NSString *deviceModel;

@property (nonatomic, readonly) NSString *minSDKVersion;
@property (nonatomic, readonly) NSString *maxSDKVersion;

@property (nonatomic, readonly) NSData *firmwareData;

- (BOOL)isFactoryFirmware;

@end
