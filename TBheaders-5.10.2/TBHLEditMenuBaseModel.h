//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSMutableArray, NSString;
@protocol TBHLTopBarCellModel;

@interface TBHLEditMenuBaseModel : TBJSONModel
{
    NSString *_name;	// 8 = 0x8
    NSMutableArray<TBHLTopBarCellModel> *_itemList;	// 16 = 0x10
}

+ (id)modelKeyMapper;
@property(retain, nonatomic) NSMutableArray<TBHLTopBarCellModel> *itemList; // @synthesize itemList=_itemList;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
