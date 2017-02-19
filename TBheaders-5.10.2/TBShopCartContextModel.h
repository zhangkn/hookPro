//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBShopCartBasicModel.h"

@class NSString, TBCartItemComponent, TBShopCartCellCustomize;

@interface TBShopCartContextModel : TBShopCartBasicModel
{
    _Bool _infoOneLine;	// 24 = 0x18
    TBCartItemComponent *_item;	// 32 = 0x20
    double _cellHeight;	// 40 = 0x28
    NSString *_bgColor;	// 48 = 0x30
    TBShopCartCellCustomize *_cellCustomize;	// 56 = 0x38
}

@property(retain, nonatomic) TBShopCartCellCustomize *cellCustomize; // @synthesize cellCustomize=_cellCustomize;
@property(nonatomic) _Bool infoOneLine; // @synthesize infoOneLine=_infoOneLine;
@property(retain, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) TBCartItemComponent *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (_Bool)showOriginPrice;
- (_Bool)showSimilar;
- (_Bool)showWeight;
- (_Bool)showBizIconP;
- (_Bool)showBizIconS;
- (_Bool)SKUEditable;
- (_Bool)isRelationItem;
- (_Bool)canDelete;
- (_Bool)canAddFavorite;
- (_Bool)canEditing;
- (id)init;

@end
