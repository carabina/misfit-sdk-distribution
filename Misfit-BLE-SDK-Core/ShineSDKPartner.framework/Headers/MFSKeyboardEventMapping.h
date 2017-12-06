//
//  MFSKeyboardEventMapping.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 12/21/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import "MFSEventMapping.h"

@interface MFSKeyboardEventMapping : MFSEventMapping

- (instancetype)initWithKeyboardType:(MFSKeyboardType)keyboardType
                               event:(MFSButtonEventType)event
                           animation:(MFSButtonEventAnimationType)animation;

@end
