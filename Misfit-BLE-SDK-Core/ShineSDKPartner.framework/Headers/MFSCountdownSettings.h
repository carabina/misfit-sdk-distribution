//
//  MFSCountdownSettings.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 7/11/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MFSCountdownSettings : NSObject

/*!
 *  @property startTime
 *
 *  @description UTC timestamp, the seconds part.
 */
@property (nonatomic) uint32_t startTime;

/*!
 *  @property startTime
 *
 *  @description UTC timestamp, the seconds part.
 */
@property (nonatomic) uint32_t endTime;

/*!
 *  @property timeZoneOffsetInMinutes
 *
 *  @description Timezone offset in minutes.
 */
@property (nonatomic) int16_t timeZoneOffsetInMinutes;

/*!
 *  @property progress
 *
 *  @description Countdown progress value.(Progress = 0xFF - Count down has not started yet.)
 *
 */
@property (nonatomic, readonly) uint8_t progress;

+ (MFSCountdownSettings *)countdownSettingsWith:(uint32_t)startTime
                                        endTime:(uint32_t)endTime
                        timeZoneOffsetInMinutes:(int16_t)timeZoneOffsetInMinutes;

- (NSDictionary *)keyValueDescription;

@end
