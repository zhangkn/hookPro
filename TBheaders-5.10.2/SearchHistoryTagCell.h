//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "SearchHotspotViewDelegate-Protocol.h"
#import "SearchSegmentBaseCell-Protocol.h"

@class NSString, SearchHotspotView, UIActivityIndicatorView, UIButton, UILabel, UIView;
@protocol SuggestSegmentCellDelegate;

@interface SearchHistoryTagCell : UITableViewCell <SearchHotspotViewDelegate, SearchSegmentBaseCell>
{
    id <SuggestSegmentCellDelegate> _hsDelegate;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    SearchHotspotView *_hotSpotView;	// 24 = 0x18
    UIView *_titleView;	// 32 = 0x20
    UIButton *_delBtn;	// 40 = 0x28
    UIActivityIndicatorView *_actView;	// 48 = 0x30
    UIButton *_errorBtn;	// 56 = 0x38
    UILabel *_messageLbl;	// 64 = 0x40
}

@property(retain, nonatomic) UILabel *messageLbl; // @synthesize messageLbl=_messageLbl;
@property(retain, nonatomic) UIButton *errorBtn; // @synthesize errorBtn=_errorBtn;
@property(retain, nonatomic) UIActivityIndicatorView *actView; // @synthesize actView=_actView;
@property(retain, nonatomic) UIButton *delBtn; // @synthesize delBtn=_delBtn;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) SearchHotspotView *hotSpotView; // @synthesize hotSpotView=_hotSpotView;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <SuggestSegmentCellDelegate> hsDelegate; // @synthesize hsDelegate=_hsDelegate;
- (void).cxx_destruct;
- (void)clickRefreshBtn:(id)arg1;
- (void)clickCleanHistoryBtn:(id)arg1;
- (void)reloadContentView;
- (void)searchHotspotView:(id)arg1 selectHotspot:(id)arg2 WithTouchBtn:(id)arg3;
- (void)configWithData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)calculateHeight:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
