//
//  MFSAlarmSettings.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Minh Nguyen on 8/4/15.
//  Copyright (c) 2015 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MFSAlarmSettings : NSObject

@property (nonatomic) BOOL repeated;

@property (nonatomic) uint8_t hour;
@property (nonatomic) uint8_t minute;

@property (nonatomic) uint8_t windowInMinute;
@property (nonatomic) uint8_t snoozeTimeInMinute;
@property (nonatomic) uint8_t alarmDuration;

@property (nonatomic) MFSLEDSequence ledSequence;
@property (nonatomic) MFSVibeSequence vibeSequence;
@property (nonatomic) MFSSoundSequence soundSequence;

- (instancetype)initWithHour:(uint8_t)hour
                      minute:(uint8_t)minute
                    repeated:(BOOL)repeated
            smartAlarmWindow:(uint8_t)windowInMinute
                  snoozeTime:(uint8_t)snoozeTimeInMinute
               alarmDuration:(uint8_t)alarmDurationInMinute
            sequenceSettings:(MFSPlutoSequenceSettings)sequenceSettings;

- (NSDictionary *)keyValueDescription;

@end
