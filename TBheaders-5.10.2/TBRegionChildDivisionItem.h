//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBRegionChildDivisionItem : TBJSONModel
{
    NSString *_divisionCode;	// 8 = 0x8
    NSString *_divisionName;	// 16 = 0x10
    NSString *_isLeaf;	// 24 = 0x18
    NSString *_post;	// 32 = 0x20
}

@property(retain, nonatomic) NSString *post; // @synthesize post=_post;
@property(retain, nonatomic) NSString *isLeaf; // @synthesize isLeaf=_isLeaf;
@property(retain, nonatomic) NSString *divisionName; // @synthesize divisionName=_divisionName;
@property(retain, nonatomic) NSString *divisionCode; // @synthesize divisionCode=_divisionCode;
- (void).cxx_destruct;

@end

