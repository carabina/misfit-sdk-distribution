//
//  MFSSleepSyncData.h
//  MSLFramework
//
//  Created by Hien Nguyen on 6/14/16.
//  Copyright © 2016 Misfit Inc. All rights reserved.
//

#import "MFSSleepSession.h"
#import "MFSSessionTimestamp.h"

@interface MFSSleepData : NSObject

@property (nonatomic, readonly) NSArray<MFSSleepSession *> *sleepSessions;
@property (nonatomic, readonly) NSArray<MFSSessionTimestamp *> *idleSessionsTimestamp;

- (instancetype)initWithSleepSessions:(NSArray<MFSSleepSession *> *)sleepSessions
                 idleSessionTimestamp:(NSArray<MFSSessionTimestamp *> *)idleSessionTimestamp;

- (NSDictionary *)keyValueDescription;

@end
