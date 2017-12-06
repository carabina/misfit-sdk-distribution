//
//  MFSHIDEventMapping.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 8/3/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MFSEventMapping.h"

@interface MFSHIDEventMapping : MFSEventMapping

- (instancetype)initWithHIDMode:(MFSHIDMediaType)mediaType
                          event:(MFSButtonEventType)event
                      animation:(MFSButtonEventAnimationType)animation
           isReleasekeyIncluded:(BOOL)isReleasekeyIncluded;
@end
