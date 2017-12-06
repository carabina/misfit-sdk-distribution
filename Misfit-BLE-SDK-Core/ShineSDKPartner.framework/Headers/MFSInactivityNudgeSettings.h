//
//  MFSInactivityNudgeSettings.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Minh Nguyen on 8/4/15.
//  Copyright (c) 2015 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MFSInactivityNudgeSettings : NSObject

@property (nonatomic) BOOL enabled;

@property (nonatomic) uint8_t startHour;
@property (nonatomic) uint8_t startMinute;

@property (nonatomic) uint8_t endHour;   // including?
@property (nonatomic) uint8_t endMinute; // including?

@property (nonatomic) uint8_t repeatIntervalInMinute; // including?

@property (nonatomic) MFSLEDSequence ledSequence;
@property (nonatomic) MFSVibeSequence vibeSequence;
@property (nonatomic) MFSSoundSequence soundSequence;

- (instancetype)initWithEnabled:(BOOL)enabled
                      startHour:(uint8_t)startHour
                    startMinute:(uint8_t)startMinute
                        endHour:(uint8_t)endHour
                      endMinute:(uint8_t)endMinute
                 repeatInterval:(uint8_t)repeatIntervalInMinute
               sequenceSettings:(MFSPlutoSequenceSettings)sequenceSettings;

- (NSDictionary *)keyValueDescription;

@end
