//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCPayControlData;

@protocol WCPayPayPwdViewControllerDelegate <NSObject>
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;

@optional
- (void)RepeatInputPayPwd:(WCPayControlData *)arg1;
- (void)SetPayPwdNext:(WCPayControlData *)arg1;
- (void)VerifyPayPwdNext:(WCPayControlData *)arg1;
@end
