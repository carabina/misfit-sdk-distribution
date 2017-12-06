//
//  MFSStreamInstr.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 6/8/17.
//  Copyright © 2017 Misfit Wearables. All rights reserved.
//

#import "MFSInstruction.h"

/*!
 *  @class MFSStreamInstr
 *
 *  @discussion
 *      Begins BLE stream of the µApp Status Stack and an optional parameter frame.
 *
 */
@interface MFSStreamInstr : MFSInstruction

@property (nonatomic, readonly) uint8_t streamData;

/*!
 *  @method initWithStreamData:data
 *
 *  @param data         BLE stream data.
 *
 *  @discussion			Returns an initialized instruction.
 *
 */
- (instancetype)initWithStreamData:(uint8_t)data;

@end
