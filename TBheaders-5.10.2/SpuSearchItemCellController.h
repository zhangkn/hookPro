//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ItemCellController.h"

#import "SingleCellControllerProtocol-Protocol.h"

@class NSString, UICollectionView, UIViewController;
@protocol TMSearchResultsVMProtocol;

@interface SpuSearchItemCellController : ItemCellController <SingleCellControllerProtocol>
{
    id _model;	// 8 = 0x8
    UICollectionView *collectionView;	// 16 = 0x10
    id <TMSearchResultsVMProtocol> viewModel;	// 24 = 0x18
}

- (void)setViewModel:(id)arg1;
- (id)viewModel;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView;
@property(nonatomic) __weak id model; // @synthesize model=_model;
- (void).cxx_destruct;
- (unsigned long long)supportDataType;

// Remaining properties
@property(nonatomic) __weak UIViewController *contentController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
