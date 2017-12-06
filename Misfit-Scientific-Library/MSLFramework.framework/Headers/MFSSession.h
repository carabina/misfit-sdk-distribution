//
//  MFSSession.h
//  MSLFramework
//
//  Created by Hien Nguyen on 1/16/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

typedef enum
{
    MFSSessionTypeAuto,
    MFSSessionTypeTag,
    MFSSessionTypeACE,
    MFSSessionTypeSwim,
} MFSSessionType;

@interface MFSSession : NSObject
@property (nonatomic, readonly) NSTimeInterval bookmarkTimestamp;
@property (nonatomic, readonly) NSTimeInterval startTime;
@property (nonatomic, readonly) NSInteger duration;
@property (nonatomic, readonly) NSInteger points;
@property (nonatomic, readonly) CGFloat distance;
@property (nonatomic, readonly) CGFloat calories;
@property (nonatomic, readonly) NSInteger steps;
@property (nonatomic, readonly) MFSSessionType sessionType;

- (instancetype)initWithBookmarkTimestamp:(NSTimeInterval)bookmarkTimestamp
                                startTime:(NSTimeInterval)startTime
                                 duration:(NSInteger)duration
                                   points:(NSInteger)points
                                 distance:(CGFloat)distance
                                 calories:(CGFloat)calories
                                    steps:(NSInteger)steps
                              sessionType:(MFSSessionType)sessionType;

- (NSDictionary *)keyValueDescription;

@end
