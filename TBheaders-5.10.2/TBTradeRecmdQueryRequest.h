//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface TBTradeRecmdQueryRequest : NSObject
{
    NSString *_sourceChannel;	// 8 = 0x8
    unsigned long long _pageSize;	// 16 = 0x10
    unsigned long long _currentPage;	// 24 = 0x18
    NSDictionary *_param;	// 32 = 0x20
}

@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) unsigned long long pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSString *sourceChannel; // @synthesize sourceChannel=_sourceChannel;
- (void).cxx_destruct;
- (id)initWithSourceChannel:(id)arg1 param:(id)arg2;

@end
