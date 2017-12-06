//
//  MFSTerminateInstr.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 6/8/17.
//  Copyright © 2017 Misfit Wearables. All rights reserved.
//

#import "MFSInstruction.h"

/*!
 *  @class MFSTerminateInstr
 *
 *  @discussion
 *      Terminates the uApp which this activity is running within. This necessarily forces the uApp to be moved to the background if it was in the foreground.
 *
 */
@interface MFSTerminateInstr : MFSInstruction

@end
