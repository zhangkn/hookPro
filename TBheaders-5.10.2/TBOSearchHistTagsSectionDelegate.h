//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseSectionDelegate.h"

@class UIView;

@interface TBOSearchHistTagsSectionDelegate : TBOBaseSectionDelegate
{
    UIView *_footerView;	// 8 = 0x8
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (Class)cellClassForModel:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)clearHistData;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
