//
//  MFSSyncSession.h
//  MSLFramework
//
//  Created by Hien Nguyen on 5/10/16.
//  Copyright © 2016 Misfit Inc. All rights reserved.
//

#import "MFSProfileShine.h"
#import "MFSActivitySession.h"
#import "MFSSleepSession.h"
#import "MFSTimeRange.h"
#import "MFSTapEventsSummary.h"
#import "MFSGraphItem.h"
#import "MFSGapSession.h"
#import "MFSAutoSleepStateChange.h"
#import "MFSMinuteData.h"
#import "MFSSessionTimestamp.h"
#import "MFSSleepData.h"

@interface MFSSyncSession : NSObject

/*!
 *
 *  @param rawData      Collections of activityFiles read from the device.
 *  @param profile      User's profile will be taken into account in calculating calories and distance.
 *  @param activityType The activityType selected in activity tagging.
 *  @param deviceFamily Device family.
 *  @param syncTime     When the sync was triggered.
 */
- (instancetype)initWithRawData:(NSArray<NSData *> *)rawData
                        profile:(MFSProfileShine *)profile
                   activityType:(MFSActivityType)activityType
                   deviceFamily:(NSUInteger)deviceFamily
                       syncTime:(NSTimeInterval)syncTime
                          error:(NSError **)outError;

/*!
 *
 *  @return Activity sessions.
 */
- (NSArray <MFSActivitySession *> *)getActivitySessions;


/*!
 *  @param autoSleepStatesChange         list of auto sleep states change.
 *  @param previousSleepSessionTimestamp previous sleep segments of 14 previous days.
 *  @param previousIdleSessionTimestamp  previous idle list (user took device off) of 14 previous days.
 *  @param modelSleepServer              the model svm for sleep classification. For now (10 June 2016), it can be empty. We will use to update model later.
 *
 *  @return Sleep data.
 */
- (MFSSleepData *)getSleepSessions:(NSArray<MFSAutoSleepStateChange *> *)autoSleepStatesChange
     previousSleepSessionTimestamp:(NSArray<MFSSessionTimestamp *> *)previousSleepSessionTimestamp
      previousIdleSessionTimestamp:(NSArray<MFSSessionTimestamp *> *)previousIdleSessionTimestamp
                  modelSleepServer:(NSArray<NSNumber *> *)modelSleepServer;

/*!
 *  @return Tapped events summary.
 */
- (NSArray <MFSTapEventsSummary *> *)getTapEventsSummaries;

/*!
 *  @return Minute data activities.
 */
- (NSArray <MFSMinuteData *> *)getMinuteData;

/*!
 *  @return Graphic items.
 */
- (NSArray <MFSGraphItem *> *)getGraphItems;

/*!
 *  @return Gap sessions.
 */
- (NSArray <MFSGapSession *> *)getGapSessions;

/*!
 *  Clear all cached sync data.
 */
- (void)clearSyncSession;

@end
