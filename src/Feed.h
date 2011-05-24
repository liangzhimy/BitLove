//
//  Feed.h
//  BitLove
//
//  Created by Martin Pittenauer on 03.05.11.
//  Copyright 2011 TheCodingMonkeys. All rights reserved.
//

#import <CoreData/CoreData.h>

@class FeedItem;

@interface Feed :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * uuid;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSDate * lastUpdate;
@property (nonatomic, retain) NSString * description;
@property (nonatomic, retain) NSSet* items;

@end


@interface Feed (CoreDataGeneratedAccessors)
- (void)addItemsObject:(FeedItem *)value;
- (void)removeItemsObject:(FeedItem *)value;
- (void)addItems:(NSSet *)value;
- (void)removeItems:(NSSet *)value;

@end

