//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "aluBaseLoginViewController.h"

#import "aluAlipayLoginPageAppearance-Protocol.h"

@class NSString;

@interface aluAlipayLoginViewController : aluBaseLoginViewController <aluAlipayLoginPageAppearance>
{
}

- (void)alu_p_onScrollViewClicked;
- (void)aluLoginBoxRightAccessoryClicked;
- (void)configureOtherLoginEntry:(id)arg1 normalColor:(id)arg2 highLightColor:(id)arg3;
- (id)loginButton;
- (id)viewController;
- (void)initLoginBox;
- (void)cancelLogin;
- (void)aluLoginBoxFindBackPwdClicked:(id)arg1;
- (void)aluLoginBox:(id)arg1 didDeleteHistoryAtIndex:(long long)arg2;
- (_Bool)aluLoginBox:(id)arg1 shouldDeleteHistoryAtIndex:(long long)arg2;
- (id)aluLoginBox:(id)arg1 loginIdOfHistoryItemAtIndex:(long long)arg2;
- (void)beforeLoginWithContext:(id)arg1;
- (id)getUaPageName;
- (int)getUserLoginType;
- (void)onOtherLogin;
- (void)onForgetPassword;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)openHelpPage;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
