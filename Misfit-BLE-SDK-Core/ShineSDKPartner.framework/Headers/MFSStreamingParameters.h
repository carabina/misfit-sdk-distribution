//
//  MFSFileStreamParameter.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hoare on 11/25/14.
//  Copyright (c) 2014 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MFSStreamingParameters : NSObject

@property (nonatomic, assign) NSTimeInterval heartbeatIntervalInSeconds;

@property (nonatomic, assign) uint16_t numberOfPacketsPerEvent;

- (NSDictionary *)keyValueDescription;

@end
