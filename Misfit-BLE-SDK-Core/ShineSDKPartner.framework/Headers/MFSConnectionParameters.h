//
//  MFSConnectionParameters.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Minh Nguyen on 6/23/14.
//  Copyright (c) 2014 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MFSConnectionParameters : NSObject

@property (nonatomic, assign) NSTimeInterval connectionInterval;
@property (nonatomic, assign) NSUInteger connectionLatency;
@property (nonatomic, assign) NSTimeInterval supervisionTimeout;

- (instancetype)initWithInterVal:(NSTimeInterval)interval
                         latency:(NSUInteger)latency
              supervisionTimeout:(NSTimeInterval)suppervisionTimeout;

- (NSDictionary *)keyValueDescription;

@end
