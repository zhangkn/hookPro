//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface GameCenterLabelInfo : MMObject <PBCoding>
{
    NSString *labelName;
    NSString *labelBgColor;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *labelBgColor; // @synthesize labelBgColor;
@property(retain, nonatomic) NSString *labelName; // @synthesize labelName;
- (void).cxx_destruct;
- (void)dealloc;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
