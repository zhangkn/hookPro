//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface MLPBDownRetMsg : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int ec; // @dynamic ec;
@property(copy, nonatomic) NSString *em; // @dynamic em;
@property(nonatomic) _Bool hasEc; // @dynamic hasEc;
@property(nonatomic) _Bool hasEm; // @dynamic hasEm;
@property(nonatomic) _Bool hasMsgid; // @dynamic hasMsgid;
@property(nonatomic) _Bool hasServerTime; // @dynamic hasServerTime;
@property(copy, nonatomic) NSString *msgid; // @dynamic msgid;
@property(nonatomic) long long serverTime; // @dynamic serverTime;

@end
