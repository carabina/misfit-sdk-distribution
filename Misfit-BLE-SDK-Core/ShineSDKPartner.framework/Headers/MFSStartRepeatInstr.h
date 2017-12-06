//
//  MFSStartRepeatInstr.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 6/8/17.
//  Copyright © 2017 Misfit Wearables. All rights reserved.
//

#import "MFSInstruction.h"

/*!
 *  @class MFSStartRepeatInstr
 *
 *  @discussion
 *      Defines the beginning of a repeating set of instructions which repeat for the number specified in the parameter.
 *
 */
@interface MFSStartRepeatInstr : MFSInstruction

@property (nonatomic, readonly) uint8_t times;

/*!
 *  @method initWithRepeatTimes:times
 *
 *  @param times		Number of times for repeat
 *
 *  @discussion			Returns an initialized instruction.
 *
 */
- (instancetype)initWithRepeatTimes:(uint8_t)times;

@end
