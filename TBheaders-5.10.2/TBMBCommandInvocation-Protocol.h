//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol TBMBNotification;

@protocol TBMBCommandInvocation <NSObject>
- (id)invoke;
- (void)setNotification:(id <TBMBNotification>)arg1;
- (id <TBMBNotification>)notification;
- (void)setCommandClass:(Class)arg1;
- (Class)commandClass;
@end
