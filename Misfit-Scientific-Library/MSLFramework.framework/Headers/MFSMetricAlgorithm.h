//
//  MFSMetricAlgorithm.h
//  MSLFramework
//
//  Created by Hien Nguyen on 6/2/16.
//  Copyright © 2016 Misfit Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MFSProfileShine.h"
#import "MFSMinuteData.h"

@interface MFSMetricAlgorithm : NSObject

/*!
 *
 *  @param profileShine     User's profile will be taken into account in calculating calories.
 *  @param minuteData       Collections of minute data to calculate calories.
 *
 *  @return Total calories
 */
+ (CGFloat)calculateCaloriesWithProfile:(MFSProfileShine *)profileShine
                             minuteData:(NSArray<MFSMinuteData *> *)minuteData;

/*!
 *
 *  @param profileShine     User's profile will be taken into account in calculating calories and distance.
 *  @param minuteData       Collections of minute data to calculate distance.
 *
 *  @return Total distance(in meter).
 */
+ (CGFloat)calculateDistanceWithProfile:(MFSProfileShine *)profileShine
                             minuteData:(NSArray<MFSMinuteData *> *)minuteData;


@end
