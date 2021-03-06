//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIButton, UILabel, UISwitch;

@interface MDMomentEditSettingCardView : UIView
{
    UIView *_contentView;
    UILabel *_hiddenTitleLabel;
    UILabel *_expireTitleLabel;
    UILabel *_expireDescLabel;
    UISwitch *_expireSwitch;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
    id <MDMomentEditSettingCardViewDelegate> _delegate;
    long long _selectedIndex;
    NSMutableArray *_itemViews;
}

@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <MDMomentEditSettingCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UISwitch *expireSwitch; // @synthesize expireSwitch=_expireSwitch;
@property(retain, nonatomic) UILabel *expireDescLabel; // @synthesize expireDescLabel=_expireDescLabel;
@property(retain, nonatomic) UILabel *expireTitleLabel; // @synthesize expireTitleLabel=_expireTitleLabel;
@property(retain, nonatomic) UILabel *hiddenTitleLabel; // @synthesize hiddenTitleLabel=_hiddenTitleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)refreshUIWithHideMode:(long long)arg1 needExpire:(_Bool)arg2;
- (void)layoutSubviewsWithDesc:(id)arg1;
- (void)didSelectedHideModeItem:(id)arg1;
- (void)confirmButtonTapped;
- (void)cancelButtonTapped;
- (void)configureSubviews;
- (id)initWithDelegate:(id)arg1;

@end

