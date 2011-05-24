//
//  FeedItem.h
//  BitLove
//
//  Created by Martin Pittenauer on 03.05.11.
//  Copyright 2011 TheCodingMonkeys. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Feed;

@interface FeedItem :  NSManagedObject  
{
}

@property (nonatomic, retain) NSNumber * iTunes;
@property (nonatomic, retain) NSString * cachedDownloadPath;
@property (nonatomic, retain) NSString * uuid;
@property (nonatomic, retain) NSString * downloadURL;
@property (nonatomic, retain) NSString * description;
@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) Feed * feed;

@end



