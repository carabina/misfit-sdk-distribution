//
//  MFSMinuteDataManager.h
//  MSLFramework
//
//  Created by Hien Nguyen on 5/20/16.
//  Copyright © 2016 Misfit Inc. All rights reserved.
//

#import "MFSTimeRange.h"
#import "MFSMinuteData.h"

@interface MFSMinuteDataManager : NSObject

/*!
 *  @method sharedManager
 *
 *  @description Get an instance object of MFSMinuteDataManager.
 *
 *  @return shared instance of MFSMinuteDataManager.
 */
+ (MFSMinuteDataManager *)sharedManager;

/*!
 *  @property timeToLive
 *
 *  @description Max time to keep minute data in database.
 */
@property (nonatomic) NSTimeInterval timeToLive;

/*!
 *  @property activeDuration
 *
 *  @description Max time to processing merging.
 */
@property (nonatomic) NSTimeInterval activeDuration;

/*!
 *
 *  @param minuteData   Collections of minute activities after parsed.
 *  @param syncTime     When the sync was triggered.
 *  @param outError     The occurred error during get data.
 *
 *  @return The time range after merged new minuteData with local database.
 */
- (MFSTimeRange *)mergeMinuteData:(NSArray<MFSMinuteData *> *)minuteData
                         syncTime:(NSTimeInterval)syncTime
                            error:(NSError **)outError;

/*!
 *  @method getMinuteDataInRange
 *
 *  @param timeRange    Time range.
 *
 *  @param outError     The occurred error during get data.
 *
 *  @return             A collection of minute data in time range.
 */
- (NSArray<MFSMinuteData *> *)getMinuteDataInRange:(MFSTimeRange *)timeRange
                                             error:(NSError **)outError;

/*!
 *  @method clearAllMinuteData
 *
 *  @param outError      The occurred error during clear data.
 *
 *  @description         Clear all minute data in local database.
 *
 *  @return              Total minute data deleted.
 */
- (NSInteger)clearAllMinuteData:(NSError **)outError;

@end
