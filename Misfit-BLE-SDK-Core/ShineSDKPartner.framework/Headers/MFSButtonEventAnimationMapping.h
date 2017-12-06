//
//  MFSButtonEventAnimationMapping.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hoare on 12/2/14.
//  Copyright (c) 2014 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MFSButtonEventAnimationMapping : NSObject

@property (nonatomic, assign) MFSButtonEventAnimationType activeAnimationType;
@property (nonatomic, assign) uint8_t activeAnimationRepeat;

@property (nonatomic, assign) MFSButtonEventAnimationType unconnectedAnimationType;
@property (nonatomic, assign) uint8_t unconnectedAnimationRepeat;

@property (nonatomic, assign) MFSButtonEventAnimationType timeoutAnimationType;
@property (nonatomic, assign) uint8_t timeoutAnimationRepeat;

- (NSDictionary *)keyValueDescription;

@end
