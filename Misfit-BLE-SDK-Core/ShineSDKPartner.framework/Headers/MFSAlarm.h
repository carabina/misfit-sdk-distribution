//
//  MFSAlarmModel.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Uy Nguyen Long on 12/14/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_OPTIONS(uint8_t, MFSDayOfWeek)
{
    MFSDayOfWeekSUN = 1 << 0,
    MFSDayOfWeekMON = 1 << 1,
    MFSDayOfWeekTUE = 1 << 2,
    MFSDayOfWeekWED = 1 << 3,
    MFSDayOfWeekTHU = 1 << 4,
    MFSDayOfWeekFRI = 1 << 5,
    MFSDayOfWeekSAT = 1 << 6
};


@interface MFSAlarm : NSObject

@property (nonatomic) MFSDayOfWeek dayOfWeek;
@property (nonatomic) uint16_t hour;
@property (nonatomic) uint16_t minute;
@property (nonatomic) BOOL repeated;
@property (class, nonatomic, readonly) NSInteger maxSupportedAlarms;

- (instancetype)initWithDayOfWeek:(MFSDayOfWeek)dayOfWeek
                             hour:(uint16_t)hour
                           minute:(uint16_t)minute
                         repeated:(BOOL)repeated;

- (NSDictionary *)keyValueDescription;

@end
