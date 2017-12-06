//
//  MFSConfigurationUpdate.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Minh Nguyen on 7/14/14.
//  Copyright (c) 2014 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MFSBaseConfiguration.h"

/*!
 *  @enum MFSExtraAdvertisingDataState
 *
 *  @discussion Whether the device is sending additional data in advertising messages.
 *
 *  @constant MFSExtraAdvertisingDataStateDefault   State unknown.
 *  @constant MFSExtraAdvertisingDataStateOff       Disabled.
 *  @constant MFSExtraAdvertisingDataStateOn        Enabled.
 *
 */
typedef NS_ENUM(int8_t, MFSExtraAdvertisingDataState)
{
    MFSExtraAdvertisingDataStateDefault = -1,
    MFSExtraAdvertisingDataStateOff = 0,
    MFSExtraAdvertisingDataStateOn = 1
};

/*!
 *  @class MFSConfigurationUpdate
 *
 *  @discussion represents the configuration to be applied to the device.
 *
 */
@interface MFSConfigurationUpdate : MFSBaseConfiguration

/*!
 *  @property extraAdvertisingDataState
 *
 *  @discussion whether the device is advertising extra data, initially set to <code>MFSExtraAdvertisingDataStateDefault</code>
 *
 *  @see        MFSExtraAdvertisingDataState
 *
 */
@property (nonatomic, assign) MFSExtraAdvertisingDataState extraAdvertisingDataState;

+ (MFSTimeConfiguration)generateTimeConfiguration;

@end
