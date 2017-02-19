//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "AliDetailBottomBarItemProtocol-Protocol.h"

@class AliDetailBottomBarIconModel, NSString;

@interface AliDetailBottomBarIconComponent : UIButton <AliDetailBottomBarItemProtocol>
{
    int _groupItemType;	// 8 = 0x8
    UIButton *_iconButton;	// 16 = 0x10
    UIButton *_textButton;	// 24 = 0x18
    AliDetailBottomBarIconModel *_itemModel;	// 32 = 0x20
}

@property(retain, nonatomic) AliDetailBottomBarIconModel *itemModel; // @synthesize itemModel=_itemModel;
@property(nonatomic) int groupItemType; // @synthesize groupItemType=_groupItemType;
@property(retain, nonatomic) UIButton *textButton; // @synthesize textButton=_textButton;
@property(retain, nonatomic) UIButton *iconButton; // @synthesize iconButton=_iconButton;
- (void).cxx_destruct;
- (void)componentActionClicked:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)adjustSubviewRightCenterType;
- (void)layoutSubviews;
- (void)setToolItemModel:(id)arg1;
- (_Bool)drawLine;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
