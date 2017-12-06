//
//  MFSActivitySession.h
//  MSLFramework
//
//  Created by Hien Nguyen on 1/16/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import "MFSSession.h"

typedef enum
{
    MFSActivitySessionTypeUnknown,
    MFSActivitySessionTypeRunning,
    MFSActivitySessionTypeCycling,
    MFSActivitySessionTypeSwimming,
    MFSActivitySessionTypeWalking,
    MFSActivitySessionTypeTennis,
    MFSActivitySessionTypeBasketball,
    MFSActivitySessionTypeFootball,
    MFSActivitySessionTypeYoga,
    MFSActivitySessionTypeDancing,
    MFSActivitySessionTypeSleep
} MFSActivityType;

@interface MFSActivitySession : MFSSession

@property (nonatomic, readonly) NSInteger rawPoint;
@property (nonatomic, readonly) MFSActivityType type;
@property (nonatomic, readonly) NSInteger stroke;
@property (nonatomic, readonly) NSInteger laps;

- (instancetype)initWithBookmarkTimestamp:(NSTimeInterval)bookmarkTimestamp
                                startTime:(NSTimeInterval)startTime
                                 duration:(NSInteger)duration
                                   points:(NSInteger)points
                                 distance:(CGFloat)distance
                                 calories:(CGFloat)calories
                                    steps:(NSInteger)steps
                              sessionType:(MFSSessionType)sessionType
                                 rawPoint:(NSInteger)rawPoint
                                     type:(MFSActivityType)type
                                   stroke:(NSInteger)stroke
                                     laps:(NSInteger)laps;

- (NSDictionary *)keyValueDescription;

@end
