//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "PopCenterProtocolForPoplayer-Protocol.h"

@class NSMapTable, NSString;

@interface TBPopCenterForPopLayer : NSObject <PopCenterProtocolForPoplayer>
{
    NSMapTable *_popCtrlToPopOperationMapTable;	// 8 = 0x8
}

@property(retain, nonatomic) NSMapTable *popCtrlToPopOperationMapTable; // @synthesize popCtrlToPopOperationMapTable=_popCtrlToPopOperationMapTable;
- (void).cxx_destruct;
- (void)finishShowing:(id)arg1;
- (void)tryShow:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
