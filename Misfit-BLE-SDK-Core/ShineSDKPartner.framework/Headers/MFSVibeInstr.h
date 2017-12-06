//
//  MFSVibeInstr.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 6/8/17.
//  Copyright © 2017 Misfit Wearables. All rights reserved.
//

#import "MFSInstruction.h"

typedef NS_ENUM (uint8_t, MFSVibeGestureType)
{
    MFSVibeGestureNone      = 0x00,
    MFSVibeGestureOpen      = 0x01,
    MFSVibeGestureError     = 0x02,
    MFSVibeGestureReady     = 0x03,
    MFSVibeGestureStart     = 0x04,
    MFSVibeGestureStop      = 0x05,
    MFSVibeGestureReset     = 0x06,
};

@interface MFSVibeInstr : MFSInstruction

- (instancetype)initWithVibeGuesture:(MFSVibeGestureType)vibeGuesture;

@end
