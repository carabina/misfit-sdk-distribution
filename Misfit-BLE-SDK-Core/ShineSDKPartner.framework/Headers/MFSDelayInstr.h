//
//  MFSDelayInstr.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 6/8/17.
//  Copyright © 2017 Misfit Wearables. All rights reserved.
//

#import "MFSInstruction.h"

/*!
 *  @class MFSDelayInstr
 *
 *  @discussion
 *      Waits for number of 100 ms intervals before continuing to next instruction
 *
 */
@interface MFSDelayInstr : MFSInstruction

@property (nonatomic, readonly) NSTimeInterval delay;

/*!
 *  @method initWithDelay:delay
 *
 *  @param delayInSecond	Number of delay intervals
 *
 *  @discussion			    Returns an initialized instruction.
 *
 */
- (instancetype)initWithDelayInSecond:(NSTimeInterval)delayInSecond;

@end
