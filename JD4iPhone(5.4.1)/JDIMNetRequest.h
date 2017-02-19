//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface JDIMNetRequest : NSObject
{
    _Bool _isHttps;
    NSString *_webUrl;
    NSMutableArray *_networks;
}

+ (id)sharedJDIMNetRequest;
@property(retain, nonatomic) NSMutableArray *networks; // @synthesize networks=_networks;
@property(nonatomic) _Bool isHttps; // @synthesize isHttps=_isHttps;
@property(copy, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
- (void).cxx_destruct;
- (void)requestNetLog:(id)arg1 errorType:(int)arg2 contextInfo:(id)arg3 msgId:(id)arg4 isTcp:(_Bool)arg5;
- (id)requestSelfServiceInfo:(id)arg1;
- (id)requestHistoryMsgs:(id)arg1 withVenderId:(id)arg2 withPage:(id)arg3;
- (id)requestVenderInfo:(id)arg1 withVenderId:(id)arg2;
- (id)requestProductInfo:(id)arg1 withSku:(id)arg2;
- (id)requestRecentBrowserSku:(id)arg1 withPage:(id)arg2;
- (id)requestOrderDetail:(id)arg1 withOrderId:(id)arg2;
- (id)requestRecentOrdersInfo:(id)arg1 withPage:(id)arg2;
- (id)requestOwnerInfo:(id)arg1;
- (id)getTracker:(id)arg1 timeOut:(id)arg2;
- (id)getToken:(id)arg1;
- (id)getWebServerUrl;
- (id)init;

@end
