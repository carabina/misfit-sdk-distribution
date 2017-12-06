//
//  MFSAnimationConfig.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 6/8/17.
//  Copyright © 2017 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(uint8_t, MFSPresetValue)
{
    MFSPresetValueDate              = 0,
    MFSPresetValueTimeTwo           = 1,
    MFSPresetValueAlert             = 2,
    MFSPresetValueAlarm             = 3,
    MFSPresetValueProgress          = 4,
    MFSPresetValueSleep             = 5,
    MFSPresetValueSwimLap           = 6,
    MFSPresetValueTwentyFourHour    = 7
};

@interface MFSAnimationConfig : NSObject

@property (nonatomic, readonly) MFSHandMovingDirection direction;
@property (nonatomic, readonly) MFSHandMovingType movingType;
@property (nonatomic, readonly) MFSHandMovingSpeed speed;
@property (nonatomic, readonly) MFSHandId handId;
@property (nonatomic, readonly) uint16_t handDegrees;
@property (nonatomic, readonly) MFSPresetValue presetValue;

- (instancetype)initWithHandId:(MFSHandId)handId
                     direction:(MFSHandMovingDirection)direction
                    movingType:(MFSHandMovingType)movingType
                         speed:(MFSHandMovingSpeed)speed
                   handDegrees:(uint16_t)handDegrees;

- (instancetype)initWithHandId:(MFSHandId)handId
                     direction:(MFSHandMovingDirection)direction
                    movingType:(MFSHandMovingType)movingType
                         speed:(MFSHandMovingSpeed)speed
                   presetValue:(MFSPresetValue)presetValue;

@end
