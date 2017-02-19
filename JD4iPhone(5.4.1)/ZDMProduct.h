//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JumpToNativeModelProtocol.h"

@class NSArray, NSDictionary, NSString, ShareModel;

@interface ZDMProduct : NSObject <JumpToNativeModelProtocol>
{
    NSString *_productNumber;
    NSString *_imagePath;
    NSArray *_additionalImagePaths;
    NSString *_price;
}

@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSArray *additionalImagePaths; // @synthesize additionalImagePaths=_additionalImagePaths;
@property(copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(copy, nonatomic) NSString *productNumber; // @synthesize productNumber=_productNumber;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *params;
@property(copy, nonatomic) NSString *des;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool notAnimated;
@property(retain, nonatomic) ShareModel *shareModel;
@property(readonly) Class superclass;

@end
