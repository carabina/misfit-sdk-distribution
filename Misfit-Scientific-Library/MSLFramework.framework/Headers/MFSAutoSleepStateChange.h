//
//  MFSAutoSleepStateChange.h
//  MSLFramework
//
//  Created by Hien Nguyen on 5/30/16.
//  Copyright © 2016 Misfit Inc. All rights reserved.
//

@interface MFSAutoSleepStateChange : NSObject

@property (nonatomic, readonly) NSTimeInterval startTime;
@property (nonatomic, readonly) BOOL isAutoSleep;

- (instancetype)initWithStartTime:(NSTimeInterval)startTime
                        autoSleep:(BOOL)autoSleep;

- (NSDictionary *)keyValueDescription;

@end
