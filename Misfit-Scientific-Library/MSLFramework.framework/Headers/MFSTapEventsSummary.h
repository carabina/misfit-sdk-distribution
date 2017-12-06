//
//  MFSTapEventsSummary.h
//  MSLFramework
//
//  Created by Hien Nguyen on 5/10/16.
//  Copyright © 2016 Misfit Inc. All rights reserved.
//

@interface MFSTapEventsSummary : NSObject

@property (nonatomic, readonly) NSTimeInterval startTime;
@property (nonatomic, readonly) NSUInteger doubleTapCount;
@property (nonatomic, readonly) NSUInteger tripleTapCount;
@property (nonatomic, readonly) NSArray *goalTrackingIds;

- (instancetype)initWithStartTime:(NSTimeInterval)startTime
                   doubleTapCount:(NSUInteger)doubleTapCount
                   tripleTapCount:(NSUInteger)tripleTapCount
                  goalTrackingIds:(NSArray *)goalTrackingIds;

- (NSDictionary *)keyValueDescription;

@end
