//
//  MFSSleepSession.h
//  MSLFramework
//
//  Created by Hien Nguyen on 3/23/16.
//  Copyright © 2016 Misfit Inc. All rights reserved.
//

#import "MFSSleepStateChange.h"

@interface MFSSleepSession : NSObject

@property (nonatomic, readonly) NSTimeInterval bookmarkTime;
@property (nonatomic, readonly) NSTimeInterval startTime;
@property (nonatomic, readonly) NSUInteger duration;
@property (nonatomic, readonly) NSUInteger sleepMinute;
@property (nonatomic, readonly) NSUInteger deepSleepMinute;
@property (nonatomic, readonly) CGFloat normalizedSleepQuality;
@property (nonatomic, readonly) NSArray<MFSSleepStateChange *> *sleepStateChanges;
@property (nonatomic, readonly) BOOL isAutoSleep;
@property (nonatomic, readonly) NSInteger timezoneOffsetInSecond;

- (instancetype)initWithStartTime:(NSTimeInterval)startTime
                     bookmarkTime:(NSTimeInterval)bookmarkTime
                         duration:(NSUInteger)duration
                      sleepMinute:(NSUInteger)sleepMinute
                  deepSleepMinute:(NSUInteger)deepSleepMinute
           normalizedSleepQuality:(CGFloat)normalizedSleepQuality
                sleepStateChanges:(NSArray<MFSSleepStateChange *> *)sleepStateChanges
                      isAutoSleep:(BOOL)isAutoSleep
           timezoneOffsetInSecond:(NSInteger)timezoneOffsetInSecond;

- (NSDictionary *)keyValueDescription;

@end
