//
//  MFSDisplayModeEventMapping.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 12/27/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import "MFSEventMapping.h"

@interface MFSDisplayModeEventMapping : MFSEventMapping

- (instancetype)initWithDisplayMode:(MFSDisplayMode)displayMode
                        buttonEvent:(MFSButtonEventType)event;

@end
