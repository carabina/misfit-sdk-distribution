//
//  MFSConstant+ButtonEvent.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 8/5/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#ifndef MFSConstant_ButtonEvent_h
#define MFSConstant_ButtonEvent_h

typedef NS_ENUM(uint8_t, MFSButtonEventType)
{
    MFSButtonEventHeartbeat                 = 0x00,
    /*
     * Flash only
     */
    MFSButtonEventLongPress                 = 0x0C,
    /*
     * Flash only
     */
    MFSButtonEventSinglePress               = 0x13,
    /*
     * Flash only
     */
    MFSButtonEventDoublePress               = 0x14,
    /*
     * Flash only
     */
    MFSButtonEventTriplePress               = 0x15,
    /*
     * Flash only
     */
    MFSButtonEventTripleTap                 = 0xFE,
    /*
     * Flash only
     */
    MFSButtonEventDoublePressAndHold        = 0x16,
    /*
     * SAM only
     */
    MFSButtonEventButton1Pressed            = 0x2A,
    /*
     * SAM only
     */
    MFSButtonEventButton2Pressed            = 0x2B,
    /*
     * SAM only
     */
    MFSButtonEventButton3Pressed            = 0x2C,
    /*
     * SAM only
     */
    MFSButtonEventButton1SinglePress        = 0x30,
    /*
     * SAM only
     */
    MFSButtonEventButton1SinglePressAndHold = 0x31,
    /*
     * SAM only
     */
    MFSButtonEventButton1DoublePress        = 0x32,
    /*
     * SAM only
     */
    MFSButtonEventButton1DoublePressAndHold = 0x33, 
    /*
     * SAM only
     */
    MFSButtonEventButton1TriplePress        = 0x34,
    /*
     * SAM only
     */
    MFSButtonEventButton1TriplePressAndHold = 0x35, 
    /*
     * SAM only
     */
    MFSButtonEventButton1HoldRelease        = 0x36,
    /*
     * SAM only
     */
    MFSButtonEventButton2SinglePress        = 0x38,
    /*
     * SAM only
     */
    MFSButtonEventButton2SinglePressAndHold = 0x39, 
    /*
     * SAM only
     */
    MFSButtonEventButton2DoublePress        = 0x3A,
    /*
     * SAM only
     */
    MFSButtonEventButton2DoublePressAndHold = 0x3B, 
    /*
     * SAM only
     */
    MFSButtonEventButton2TriplePress        = 0x3C,
    /*
     * SAM only
     */
    MFSButtonEventButton2TriplePressAndHold = 0x3D,
    /*
     * SAM only
     */
    MFSButtonEventButton2HoldRelease        = 0x3E,
    /*
     * SAM only
     */
    MFSButtonEventButton3SinglePress        = 0x40,
    /*
     * SAM only
     */
    MFSButtonEventButton3SinglePressAndHold = 0x41,
    /*
     * SAM only
     */
    MFSButtonEventButton3DoublePress        = 0x42,
    /*
     * SAM only
     */
    MFSButtonEventButton3DoublePressAndHold = 0x43,
    /*
     * SAM only
     */
    MFSButtonEventButton3TriplePress        = 0x44,
    /*
     * SAM only
     */
    MFSButtonEventButton3TriplePressAndHold = 0x45,
    /*
     * SAM only - reviewing
     */
    MFSButtonEventButton3HoldRelease        = 0x46,
};

typedef NS_ENUM(uint8_t, MFSButtonEventAnimationType)
{
    MFSButtonEventAnimationNull                 = 0x00,
    MFSButtonEventAnimationSuccess              = 0x0b,
    MFSButtonEventAnimationError                = 0x0c, // to be triggered by the app in case it failed to execute the action.
    
    MFSButtonEventAnimationSingleReceived       = 0x11, // to be mapped to SinglePress.
    MFSButtonEventAnimationDoubleReceived       = 0x0d, // to be mapped to DoublePress.
    MFSButtonEventAnimationTripleReceived       = 0x0e, // to be mapped to TriplePress.
    MFSButtonEventAnimationLongReceived         = 0x12, // to be mapped to LongPress.
    MFSButtonEventAnimationDoubleHoldReceived   = 0x13, // to be mapped to DoublePressAndHold.
    
    MFSButtonEventAnimationSingleSuccess        = 0x14, // to be triggered by app when the action succeeded. (E.g. calling an Uber)
    MFSButtonEventAnimationDoubleSuccess        = 0x0f, // to be triggered by app when the action succeeded.
    MFSButtonEventAnimationTripleSuccess        = 0x10, // to be triggered by app when the action succeeded.
    MFSButtonEventAnimationLongSuccess          = 0x15, // to be triggered by app when the action succeeded.
    MFSButtonEventAnimationDoubleHoldSuccess    = 0x16, // to be triggered by app when the action succeeded.
};

typedef NS_ENUM(uint16_t, MFSHIDMediaType)
{
    MFSHIDMediaTypePlayPause    = 0x00CD,
    MFSHIDMediaTypeVolumeUp     = 0x00E9,
    MFSHIDMediaTypeVolumeDown   = 0x00EA,
    MFSHIDMediaTypeNext         = 0x00B5,
    MFSHIDMediaTypePrevious     = 0x00B6,
    MFSHIDMediaTypeMute         = 0x00E2,
};

typedef NS_ENUM(uint8_t, MFSKeyboardType)
{
    MFSKeyboardLowWhite = 0x05,
    MFSKeyboardLowBlack = 0x1A,
    MFSKeyboardRight    = 0x4F,
    MFSKeyboardLeft     = 0x50,
    MFSKeyboardPageUp   = 0x4B,
    MFSKeyboardPageDown = 0x4E,
    MFSKeyboardEnter    = 0x58,
};

typedef NS_ENUM(uint8_t, MFSDisplayMode)
{
    MFSDisplayDate      = 0,
    MFSDisplayTime1     = 1,    //  - not implemented
    MFSDisplayTime2     = 2,
    MFSDisplayAlert     = 3,
    MFSDisplayAlarm     = 4,
    MFSDisplay24h       = 5,    // - not implemented
    MFSDisplay12h       = 6,    // - not implemented
    MFSDisplayNoMode    = 7,    // - not implemented
    MFSDisplayProgress  = 8,
    MFSDisplaySecond    = 9,    // - not implemented
    MFSDisplayCountdown = 10,
    MFSDisplayDefault   = 11,   // - not implemented
    MFSDisplaySequence  = 12,
    MFSDisplayStopWatch = 13,
};

#endif /* MFSConstant_ButtonEvent_h */
