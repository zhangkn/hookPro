//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface WeAppComponentManager : NSObject
{
    NSMutableDictionary *_classDic;	// 8 = 0x8
}

+ (void)addComponetClass:(Class)arg1 withKey:(id)arg2;
+ (Class)getClassByComponentItem:(id)arg1;
+ (Class)getClassByType:(id)arg1;
+ (id)componentClassHelp;
@property(retain, nonatomic) NSMutableDictionary *classDic; // @synthesize classDic=_classDic;
- (void).cxx_destruct;
- (void)addComponetClass:(Class)arg1 withKey:(id)arg2;
- (Class)getClassByComponentItem:(id)arg1;
- (Class)getClassByType:(id)arg1;
- (void)configClassDicForSlideView;
- (void)configClassDicForCollectionView;
- (void)configClassDic;

@end
