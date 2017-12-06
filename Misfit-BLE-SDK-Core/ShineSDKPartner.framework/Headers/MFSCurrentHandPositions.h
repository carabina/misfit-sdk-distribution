//
//  MFSCurrentHandPositions.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 7/26/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MFSCurrentHandPositions : NSObject
@property (nonatomic) uint16_t hourHandPosition;
@property (nonatomic) uint16_t minuteHandPosition;
@property (nonatomic) uint16_t subeyeHandPosition;

- (NSDictionary *)keyValueDescriptions;

@end
