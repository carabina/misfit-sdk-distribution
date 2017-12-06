//
//  MFSConfiguration.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Minh Nguyen on 1/9/14.
//  Copyright (c) 2014 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MFSBaseConfiguration.h"

static const int16_t kDefaultBatteryLevel = -1;

/*!
 *  @class MFSConfiguration
 *
 *  @discussion represents device's configuration, including the time, battery level, current activity points, daily goal and others configs.
 *
 */
@interface MFSConfiguration : MFSBaseConfiguration

/*!
 *  @property batteryLevel
 *
 *  @discussion Current battery level of the device. It is recommended to replace the battery once it reaches 25%.
 *
 */
@property (nonatomic, assign) int16_t batteryLevel;

@end
