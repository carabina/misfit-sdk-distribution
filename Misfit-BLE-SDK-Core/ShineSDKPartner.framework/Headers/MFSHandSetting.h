//
//  MFSHandSetting.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 7/20/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MFSHandSetting : NSObject

@property (nonatomic) MFSHandId handId;
@property (nonatomic) uint16_t degrees;
@property (nonatomic) MFSHandMovingSpeed speed;
@property (nonatomic) MFSHandMovingDirection direction;

- (instancetype)initWithHandId:(MFSHandId)handId
                       degrees:(uint16_t)degrees
                     direction:(MFSHandMovingDirection)direction
                         speed:(MFSHandMovingSpeed)speed;

- (NSDictionary *)keyValueDescription;

@end
