//
//  MFSMinuteData.h
//  MSLFramework
//
//  Created by Hien Nguyen on 6/2/16.
//  Copyright © 2016 Misfit Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MFSMinuteData : NSObject

@property (nonatomic) NSTimeInterval startTime;
@property (nonatomic) NSUInteger steps;
@property (nonatomic) NSUInteger minuteId;
@property (nonatomic) NSUInteger points;

- (instancetype)initWithStartTime:(NSTimeInterval)startTime
                            steps:(NSUInteger)steps
                           points:(NSUInteger)points;

- (NSDictionary *)keyValueDescription;

@end
