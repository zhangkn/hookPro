//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol MirrorGetMaterialDelegate <NSObject>
- (void)getMaterialFailWithMsg:(NSString *)arg1;
- (void)getMaterialSuccess:(NSArray *)arg1;
- (void)startGetMaterialFromServer;
@end
