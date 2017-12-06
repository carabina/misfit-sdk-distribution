//
//  MFSConstant+SAM.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 8/5/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#ifndef MFSConstant_SAM_h
#define MFSConstant_SAM_h

#pragma mark SAM - Hand's ID
typedef NS_ENUM(uint8_t, MFSHandId)
{
    MFSHandIdHour   = 0x01,
    MFSHandIdMinute = 0x02,
    MFSHandIdSubeye = 0x03
};

typedef NS_ENUM(uint8_t, MFSHandMovingType)
{
    MFSHandMovingTypeDistance   = 0x01,
    MFSHandMovingTypePosition   = 0x02
};

typedef NS_ENUM(uint8_t, MFSHandMovingDirection)
{
    MFSHandMovingDirectionClockWise         = 0x01,
    MFSHandMovingDirectionCounterClockWise  = 0x02,
    MFSHandMovingDirectionShortestPath      = 0x03,
};

#pragma mark SAM - Speed
typedef NS_ENUM(uint8_t, MFSHandMovingSpeed)
{
    MFSHandMovingSpeedFull       = 0x01,
    MFSHandMovingSpeedHalf       = 0x02,
    MFSHandMovingSpeedQuarter    = 0x03,
    MFSHandMovingSpeedEigth      = 0x04,
    MFSHandMovingSpeedSixteenth  = 0x05
};

typedef NS_ENUM(uint8_t, MFSNotificationVibeSequence)
{
    MFSNotificationVibeSequenceAuto       = 0x00,
    MFSNotificationVibeSequenceCall       = 0x01,
    MFSNotificationVibeSequenceText       = 0x02,
    MFSNotificationVibeSequenceEmail      = 0x03,
    MFSNotificationVibeSequenceOther      = 0x04,
    MFSNotificationVibeSequenceOne        = 0x05,
    MFSNotificationVibeSequenceTwo        = 0x06,
    MFSNotificationVibeSequenceThree      = 0x07,
    MFSNotificationVibeSequenceLong       = 0x08,
    MFSNotificationVibeSequenceNone       = 0x09
};

typedef NS_ENUM(uint8_t, MFSVibeStrengthLevel)
{
    MFSVibeStrengthLevelNone    = 0,
    MFSVibeStrengthLevelTickle  = 25,
    MFSVibeStrengthLevelLight   = 50,
    MFSVibeStrengthLevelMedium  = 75,
    MFSVibeStrengthLevelStrong  = 100
};

static const int16_t kInvalidTimezoneOffset = 1024;

#endif /* MFSConstant_SAM_h */
