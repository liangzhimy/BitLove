//
//  Subscriptions.h
//  BitLove
//
//  Created by Martin Pittenauer on 03.05.11.
//  Copyright 2011 TheCodingMonkeys. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Feed;

@interface Subscriptions :  NSManagedObject  
{
}

@property (nonatomic, retain) NSSet* feeds;

@end


@interface Subscriptions (CoreDataGeneratedAccessors)
- (void)addFeedsObject:(Feed *)value;
- (void)removeFeedsObject:(Feed *)value;
- (void)addFeeds:(NSSet *)value;
- (void)removeFeeds:(NSSet *)value;

@end

