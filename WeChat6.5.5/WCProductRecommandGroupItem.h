//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface WCProductRecommandGroupItem : NSObject
{
    NSString *groupName;
    NSString *groupJumpUrl;
    NSArray *recommandItemList;
}

@property(retain, nonatomic) NSArray *recommandItemList; // @synthesize recommandItemList;
@property(retain, nonatomic) NSString *groupJumpUrl; // @synthesize groupJumpUrl;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName;
- (void).cxx_destruct;
- (void)dealloc;

@end
