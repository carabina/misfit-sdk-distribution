//
//  MFSHIDInstr.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 6/8/17.
//  Copyright © 2017 Misfit Wearables. All rights reserved.
//

#import "MFSInstruction.h"

typedef NS_ENUM(uint8_t, MFSHIDCode)
{
    MFSHIDCodePlayPause      = 0x00CD,
    MFSHIDCodeVolumeUp       = 0x00E9,
    MFSHIDCodeVolumeDown     = 0x00EA,
    MFSHIDCodeNext           = 0x00B5,
    MFSHIDCodePrevious       = 0x00B6,
    MFSHIDCodeMute           = 0x00E2,
    
    MFSHIDCodeLowWhite       = 0x0005,
    MFSHIDCodeLowBlack       = 0x001A,
    MFSHIDCodeRight          = 0x004F,
    MFSHIDCodeLeft           = 0x0050,
    MFSHIDCodePageUp         = 0x004B,
    MFSHIDCodePageDown       = 0x004E,
    MFSHIDCodeEnter          = 0x0058
};

/*!
 *  @class MFSHIDInstr
 *
 *  @discussion
 *      Sends HID data via BLE.
 *
 */
@interface MFSHIDInstr : MFSInstruction

@property (nonatomic, readonly) MFSHIDCode code;

@property (nonatomic, readonly) BOOL immediateRelease;

/*!
 *  @method initWithDelay:delay
 *
 *  @param code                 The HID Code
 *
 *  @param immediateRelease     Stop sending data after sent the first HID successful
 *
 *  @discussion			Returns an initialized instruction.
 *
 */
- (instancetype)initWithHIDCode:(MFSHIDCode)code immediateRelease:(BOOL)immediateRelease;

@end
