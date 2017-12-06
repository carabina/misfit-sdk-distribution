//
//  MFSAnimationInstr.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 6/8/17.
//  Copyright © 2017 Misfit Wearables. All rights reserved.
//

#import "MFSInstruction.h"
#import "MFSAnimationConfig.h"

/*!
 *  @class MFSAnimationInstr
 *
 *  @discussion
 *      Executes an animation which consists of hand movements, vibes, and pauses.
 *
 */
@interface MFSAnimationInstr : MFSInstruction

@property (nonatomic, readonly) NSArray<MFSAnimationConfig *> * animationConfigs;

- (instancetype)initWithAnimationConfigs:(NSArray<MFSAnimationConfig *> *)animationConfigs;

@end
