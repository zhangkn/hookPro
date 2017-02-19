//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMViewController.h"

#import "TMSearchScrollContentViewControllerInterface-Protocol.h"

@class NSString, UserTrackRecordV2;
@protocol TMSearchScrollContentViewControllerDelegate;

@interface TMSearchContentViewController : TMViewController <TMSearchScrollContentViewControllerInterface>
{
    UserTrackRecordV2 *_originalUserTrack;	// 16 = 0x10
    id <TMSearchScrollContentViewControllerDelegate> _containerViewController;	// 24 = 0x18
}

@property(nonatomic) __weak id <TMSearchScrollContentViewControllerDelegate> containerViewController; // @synthesize containerViewController=_containerViewController;
- (void).cxx_destruct;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupUserTrack:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
