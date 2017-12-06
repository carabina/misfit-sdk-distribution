//
//  MFSMicroAppStack.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 6/8/17.
//  Copyright © 2017 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MFSKeyValueDescriptionProtocol.h"
#import "MFSUAppMapping.h"

@interface MFSUAppNotification : NSObject <MFSKeyValueDescriptionProtocol>

@property (nonatomic, readonly) MFSUAppId uAppId;
@property (nonatomic, readonly) MFSUAppVariantId variant;

@property (nonatomic, readonly) uint8_t uAppVersion;
@property (nonatomic, readonly) uint8_t variationNumber;

@end
