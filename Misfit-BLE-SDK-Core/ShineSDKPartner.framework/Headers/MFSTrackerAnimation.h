//
//  MFSLedAnimation.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 8/30/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MFSConstant+ANCS.h"
#import "MFSNotificationAnimation.h"

@interface MFSTrackerAnimation : MFSNotificationAnimation

@property (nonatomic, readonly) MFSLedColorId colorId;
@property (nonatomic, readonly) uint8_t ledBlink;

- (instancetype)initWithColor:(MFSLedColorId)colorId
                     ledBlink:(uint8_t)ledBlink
                 vibeSequence:(MFSNotificationVibeSequence)vibeSequence;

- (NSDictionary *)keyValueDescription;

@end
