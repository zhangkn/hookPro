//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@interface TMNoviceGuide : NSObject <NSCoding>
{
    _Bool _isDisplayed;	// 8 = 0x8
    int direction;	// 12 = 0xc
    int type;	// 16 = 0x10
    id object;	// 24 = 0x18
}

@property(nonatomic) _Bool isDisplayed; // @synthesize isDisplayed=_isDisplayed;
@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) int direction; // @synthesize direction;
@property(nonatomic) id object; // @synthesize object;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
