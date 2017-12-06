//
//  MFSSessionTimestamp.h
//  MSLFramework
//
//  Created by Hien Nguyen on 6/14/16.
//  Copyright © 2016 Misfit Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MFSSessionTimestamp : NSObject

@property (nonatomic, readonly) NSTimeInterval startTime;
@property (nonatomic, readonly) NSTimeInterval endTime;
@property (nonatomic, readonly) NSInteger timezoneOffsetInSecond;


- (instancetype)initWithStartTime:(NSTimeInterval)startTime
                          endTime:(NSTimeInterval)endTime
           timezoneOffsetInSecond:(NSInteger)timezoneOffsetInSecond;

- (NSDictionary *)keyValueDescription;

@end
