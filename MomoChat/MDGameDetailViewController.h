//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "MDPhotoPreviewControllerDelegate.h"

@class MDGameDetailViewTableHandler, MDGameProfile, MDLabelImageView, MDScrollPageView, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UIScrollView, UITableView, UIView;

@interface MDGameDetailViewController : MDViewController <MDPhotoPreviewControllerDelegate>
{
    id <MDGameDetailViewControllerDelegate> _delegate;
    MDGameProfile *_currentGameProfile;
    UIScrollView *_containerView;
    UIImageView *_gameIconView;
    UILabel *_gameNameLabel;
    UILabel *_gamePlayerCountLabel;
    UILabel *_gameInfoTitleLabel;
    MDLabelImageView *_tipLabelView;
    UILabel *_gameInfoLabel;
    MDScrollPageView *_scrollPageView;
    UIImageView *_headerView;
    NSString *_currentGameID;
    UIButton *_downloadBtn;
    UIButton *_nearbyPlayerBtn;
    NSMutableArray *_postCells;
    UIView *_morePostCell;
    UIButton *_moreInfoBtn;
    UIView *_lineView;
    UITableView *_tableView;
    UITableView *_topTableView;
    NSString *_sourceId;
    MDGameDetailViewTableHandler *_topTableHandler;
    MDGameDetailViewTableHandler *_tableHandler;
}

@property(retain, nonatomic) MDGameDetailViewTableHandler *tableHandler; // @synthesize tableHandler=_tableHandler;
@property(retain, nonatomic) MDGameDetailViewTableHandler *topTableHandler; // @synthesize topTableHandler=_topTableHandler;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(retain, nonatomic) UITableView *topTableView; // @synthesize topTableView=_topTableView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *moreInfoBtn; // @synthesize moreInfoBtn=_moreInfoBtn;
@property(retain, nonatomic) UIView *morePostCell; // @synthesize morePostCell=_morePostCell;
@property(retain, nonatomic) NSMutableArray *postCells; // @synthesize postCells=_postCells;
@property(retain, nonatomic) UIButton *nearbyPlayerBtn; // @synthesize nearbyPlayerBtn=_nearbyPlayerBtn;
@property(retain, nonatomic) UIButton *downloadBtn; // @synthesize downloadBtn=_downloadBtn;
@property(copy, nonatomic) NSString *currentGameID; // @synthesize currentGameID=_currentGameID;
@property(retain, nonatomic) UIImageView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) MDScrollPageView *scrollPageView; // @synthesize scrollPageView=_scrollPageView;
@property(retain, nonatomic) UILabel *gameInfoLabel; // @synthesize gameInfoLabel=_gameInfoLabel;
@property(retain, nonatomic) MDLabelImageView *tipLabelView; // @synthesize tipLabelView=_tipLabelView;
@property(retain, nonatomic) UILabel *gameInfoTitleLabel; // @synthesize gameInfoTitleLabel=_gameInfoTitleLabel;
@property(retain, nonatomic) UILabel *gamePlayerCountLabel; // @synthesize gamePlayerCountLabel=_gamePlayerCountLabel;
@property(retain, nonatomic) UILabel *gameNameLabel; // @synthesize gameNameLabel=_gameNameLabel;
@property(retain, nonatomic) UIImageView *gameIconView; // @synthesize gameIconView=_gameIconView;
@property(retain, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MDGameProfile *currentGameProfile; // @synthesize currentGameProfile=_currentGameProfile;
@property(nonatomic) id <MDGameDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)toRect:(id)arg1 index:(long long)arg2;
- (void)showPhotoPreviewWithIndex:(long long)arg1 rect:(struct CGRect)arg2 photos:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)paddingCellModel;
- (id)infoCellModel;
- (double)tableHeight;
- (double)topTableHeight;
- (void)setupCellModels;
- (void)didClickMoreInfo:(id)arg1;
- (void)tipLabelViewPressed;
- (void)showAlertWithApiResponse:(id)arg1;
- (void)subscribeGameError:(id)arg1;
- (void)subscribeGameFailed:(id)arg1;
- (void)subscribeGameSuccess:(id)arg1;
- (void)subscribeCurrentGame;
- (void)loadGameProfileFailed:(id)arg1;
- (void)loadGameProfileErrored:(id)arg1;
- (void)loadGameProfileSuccessed:(id)arg1;
- (void)loadGameProfile;
- (void)nearbyPlayerBtnPressed;
- (void)downloadBtnPressed;
- (void)closeAction;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)refreshDownLoadBttonState;
- (void)refreshContent;
- (void)resetLineViewFrame;
- (void)refreshGameTipInfo:(id)arg1 actionString:(id)arg2;
- (void)configTitleAndBarButtonItems;
- (void)dealloc;
- (id)initWithGameID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
