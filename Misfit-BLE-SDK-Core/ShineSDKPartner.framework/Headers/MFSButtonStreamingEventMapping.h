//
//  MFSButtonStreamingEventMapping.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 12/21/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import "MFSEventMapping.h"
#import "MFSButtonEventAnimationMapping.h"

@interface MFSButtonStreamingEventMapping : MFSEventMapping

- (instancetype)initWithButtonEvent:(MFSButtonEventType)event
                          animation:(MFSButtonEventAnimationMapping *)animation;

@end
