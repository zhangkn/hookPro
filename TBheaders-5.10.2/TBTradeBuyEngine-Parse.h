//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTradeBuyEngine.h"

@interface TBTradeBuyEngine (Parse)
- (void)free;
- (void)reduce:(id)arg1;
- (id)findComponentBySelfTag:(id)arg1 parentTag:(id)arg2;
- (id)resolve:(id)arg1 withParentModel:(id)arg2;
- (void)parseAsyncResponse:(id)arg1;
- (void)parseFirstResponse:(id)arg1;
- (id)parse:(id)arg1;
- (void)addIgnoreTag:(id)arg1;
- (void)registerWithSplitJoinBlock:(CDUnknownBlockType)arg1 forSpecifiedTag:(id)arg2;
@end
