//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "CommentCenterSegmentViewDelegate.h"
#import "CommentcenterTableViewCellDelegate.h"
#import "NewRefreshTableHeaderViewDelegate.h"
#import "ServiceCommentCellDelegate.h"

@class CommentCenterAdBanner, CommentCenterSegmentView, JDStoreNetwork, NSMutableArray, NSString, NewRefreshTableHeaderView, UITableView;

@interface CommentCenterViewController : JDViewController <CommentCenterSegmentViewDelegate, CommentcenterTableViewCellDelegate, NewRefreshTableHeaderViewDelegate, ServiceCommentCellDelegate>
{
    CommentCenterSegmentView *segmentView;
    int wait4CommentCount;
    int wait4ShaidanCount;
    int commentFinishedCount;
    int serviceCount;
    NewRefreshTableHeaderView *refreshHeaderView;
    NSString *commentRuleUrl;
    CommentCenterAdBanner *_adBanner;
    _Bool isHideStory;
    _Bool needReloadData;
    _Bool isFirstIn;
    _Bool isLoading;
    _Bool isCommentCanGetMore;
    _Bool isShaidanCanGetMore;
    _Bool isFinishCanGetMore;
    _Bool isOrderCanGetMore;
    _Bool _isLoadingForService;
    int _commentType;
    int _commentPage;
    int _shaidanPage;
    int _finishPage;
    int _orderPage;
    NSMutableArray *waitCommentItems;
    NSMutableArray *waitShaidanItems;
    NSMutableArray *finishItems;
    NSMutableArray *orderItems;
    JDStoreNetwork *netWork;
    UITableView *commentWareListtableView;
}

@property(nonatomic) int orderPage; // @synthesize orderPage=_orderPage;
@property(nonatomic) int finishPage; // @synthesize finishPage=_finishPage;
@property(nonatomic) int shaidanPage; // @synthesize shaidanPage=_shaidanPage;
@property(nonatomic) int commentPage; // @synthesize commentPage=_commentPage;
@property(nonatomic) _Bool isLoadingForService; // @synthesize isLoadingForService=_isLoadingForService;
@property(nonatomic) int commentType; // @synthesize commentType=_commentType;
@property(retain, nonatomic) UITableView *commentWareListtableView; // @synthesize commentWareListtableView;
@property(nonatomic) _Bool isOrderCanGetMore; // @synthesize isOrderCanGetMore;
@property(nonatomic) _Bool isFinishCanGetMore; // @synthesize isFinishCanGetMore;
@property(nonatomic) _Bool isShaidanCanGetMore; // @synthesize isShaidanCanGetMore;
@property(nonatomic) _Bool isCommentCanGetMore; // @synthesize isCommentCanGetMore;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading;
@property(nonatomic) _Bool isFirstIn; // @synthesize isFirstIn;
@property(retain, nonatomic) JDStoreNetwork *netWork; // @synthesize netWork;
@property(retain, nonatomic) NSMutableArray *orderItems; // @synthesize orderItems;
@property(retain, nonatomic) NSMutableArray *finishItems; // @synthesize finishItems;
@property(retain, nonatomic) NSMutableArray *waitShaidanItems; // @synthesize waitShaidanItems;
@property(retain, nonatomic) NSMutableArray *waitCommentItems; // @synthesize waitCommentItems;
- (void).cxx_destruct;
- (void)commentSuccess:(id)arg1;
- (void)reloadNoDataView;
- (void)removeReloadView;
- (void)showReloadView;
- (void)openWebforRule;
- (void)addRightButton:(id)arg1;
- (void)showNoDataView;
- (void)issueCommentWithModel:(id)arg1 cell:(id)arg2;
- (void)finishLoading;
- (void)refreshData;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)segmentView:(id)arg1 didSelectedIndex:(long long)arg2;
- (void)setSegmentTitle:(id)arg1;
- (void)requestForService:(id)arg1;
- (void)getOrderData;
- (void)getdatabyType;
- (void)getdataWithType:(int)arg1;
- (void)goToStoryView;
- (void)addPictureAdBanner:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
