//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMTableViewInfo;

__attribute__((visibility("hidden")))
@interface SettingIpadClassicViewController : MMUIViewController
{
    long long m_uiCurIndex;
    MMTableViewInfo *m_tableViewInfo;
}

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadTableData;
- (void)onCustomFontSizeCellClicked:(id)arg1 indexPath:(id)arg2;
- (void)makeCustomFontSizeCell:(id)arg1 cellInfo:(id)arg2;

@end
