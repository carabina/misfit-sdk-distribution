//
//  MFSSleepStateChange.h
//  MSLFramework
//
//  Created by Hien Nguyen on 3/23/16.
//  Copyright © 2016 Misfit Inc. All rights reserved.
//

typedef NS_ENUM(NSUInteger, MFSSleepState)
{
    MFSSleepStateAwake,
    MFSSleepStateLight,
    MFSSleepStateRestful
};

@interface MFSSleepStateChange : NSObject

@property (nonatomic, readonly) NSUInteger index;
@property (nonatomic, readonly) MFSSleepState state;

- (instancetype)initWithIndex:(NSUInteger)index
                        state:(MFSSleepState)state;

- (NSDictionary *)keyValueDescription;

@end
