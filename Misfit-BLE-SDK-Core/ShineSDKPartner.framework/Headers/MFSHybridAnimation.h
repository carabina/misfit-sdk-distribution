//
//  MFSHandAnimation.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 7/17/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MFSNotificationAnimation.h"

@interface MFSHybridAnimation : MFSNotificationAnimation

/*
 * The duration of the period in which the hands will hold their positions 
 * before going back to the normal state. Duration (range 1000-60000 ms)
 */
@property (nonatomic, readonly) NSTimeInterval duration;

/*
 * The hand positions when device received a notificaiton.
 * Format: @{MFSHandId:Degrees}
 */
@property (nonatomic, readonly) NSDictionary<NSNumber *, NSNumber *> *handSettings;

- (instancetype)initWithDuration:(NSTimeInterval)duration
                    handSettings:(NSDictionary<NSNumber *, NSNumber *> *)handSettings
                    vibeSequence:(MFSNotificationVibeSequence)vibeSequence;

- (NSDictionary *)keyValueDescription;

@end
