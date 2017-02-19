//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EtaModel.h"

@class NSArray, NSString;

@interface MDGroupLatestFeed : EtaModel
{
    NSArray *_latestFeeds;
    NSString *_title;
    long long _feedCount;
    NSArray *_avatarList;
    NSArray *_picList;
}

+ (void)etafinishedModel:(id)arg1 withDict:(id)arg2;
+ (id)eta_valueTransform;
+ (id)eta_jsonKeyPathsByProperty;
@property(retain, nonatomic) NSArray *picList; // @synthesize picList=_picList;
@property(retain, nonatomic) NSArray *avatarList; // @synthesize avatarList=_avatarList;
@property(nonatomic) long long feedCount; // @synthesize feedCount=_feedCount;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *latestFeeds; // @synthesize latestFeeds=_latestFeeds;
- (void).cxx_destruct;

@end
