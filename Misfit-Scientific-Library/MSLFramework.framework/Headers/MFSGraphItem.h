//
//  MFSGraphItem.h
//  MSLFramework
//
//  Created by Hien Nguyen on 5/22/16.
//  Copyright © 2016 Misfit Inc. All rights reserved.
//

@interface MFSGraphItem : NSObject

@property (nonatomic, readonly) NSTimeInterval startTime;
@property (nonatomic, readonly) NSTimeInterval endTime;
@property (nonatomic, readonly) CGFloat averagePoint;

- (instancetype)initWithAveragePoint:(CGFloat)averagePoint
                           startTime:(NSTimeInterval)startTime
                             endTime:(NSTimeInterval)endTime;

- (NSDictionary *)keyValueDescription;

@end
