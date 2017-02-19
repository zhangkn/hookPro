//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBShareNetwork;
@protocol TBSharePrecipitationServiceDelegate;

@interface TBSharePrecipitationService : NSObject
{
    id <TBSharePrecipitationServiceDelegate> _delegate;	// 8 = 0x8
    TBShareNetwork *_myshareNetwork;	// 16 = 0x10
    TBShareNetwork *_otherShareNetwork;	// 24 = 0x18
}

@property(retain, nonatomic) TBShareNetwork *otherShareNetwork; // @synthesize otherShareNetwork=_otherShareNetwork;
@property(retain, nonatomic) TBShareNetwork *myshareNetwork; // @synthesize myshareNetwork=_myshareNetwork;
@property(nonatomic) __weak id <TBSharePrecipitationServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestOtherShareWithRowKey:(id)arg1 pageCount:(long long)arg2;
- (void)requestMyshareWithRowKey:(id)arg1 pageCount:(long long)arg2 maxVisitNumber:(long long)arg3;

@end
