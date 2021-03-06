//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TGBaseModel.h"

@class NSArray, NSString;

@interface TGDetailAuthorModel : TGBaseModel
{
    int _uType;	// 8 = 0x8
    long long _followerNumber;	// 16 = 0x10
    long long _groupId;	// 24 = 0x18
    NSString *_groupName;	// 32 = 0x20
    long long _userId;	// 40 = 0x28
    NSString *_userNick;	// 48 = 0x30
    NSString *_avatar;	// 56 = 0x38
    NSArray *_uTitles;	// 64 = 0x40
}

@property(nonatomic) int uType; // @synthesize uType=_uType;
@property(retain, nonatomic) NSArray *uTitles; // @synthesize uTitles=_uTitles;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(nonatomic) long long followerNumber; // @synthesize followerNumber=_followerNumber;
- (void).cxx_destruct;
- (id)initWithParams:(id)arg1;

@end

