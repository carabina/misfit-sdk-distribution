//
//  MFSTimeRange.h
//  MSLFramework
//
//  Created by Hien Nguyen on 3/1/16.
//  Copyright © 2016 Misfit Inc. All rights reserved.
//

@interface MFSTimeRange : NSObject

@property (nonatomic, readonly) NSTimeInterval startTime;
@property (nonatomic, readonly) NSTimeInterval endTime;

- (instancetype)initWithStartTime:(NSTimeInterval)startTime
                          endTime:(NSTimeInterval)endTime;

- (NSDictionary *)keyValueDescription;

@end
