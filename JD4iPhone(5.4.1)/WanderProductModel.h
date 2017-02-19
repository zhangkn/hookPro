//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSString;

@interface WanderProductModel : JDModel
{
    int totalCount_;
    NSString *name_;
    NSString *productCode_;
    NSString *adWords_;
    NSString *jdPrice_;
    NSString *imgUrl_;
    NSString *imgUrlN1_;
    NSString *imgUrlN2_;
    NSString *imgUrlN3_;
    NSString *imgUrlN4_;
    NSString *imgUrlN5_;
    NSString *good_;
}

@property(copy, nonatomic) NSString *good; // @synthesize good=good_;
@property(nonatomic) int totalCount; // @synthesize totalCount=totalCount_;
@property(copy, nonatomic) NSString *imgUrlN5; // @synthesize imgUrlN5=imgUrlN5_;
@property(copy, nonatomic) NSString *imgUrlN4; // @synthesize imgUrlN4=imgUrlN4_;
@property(copy, nonatomic) NSString *imgUrlN3; // @synthesize imgUrlN3=imgUrlN3_;
@property(copy, nonatomic) NSString *imgUrlN2; // @synthesize imgUrlN2=imgUrlN2_;
@property(copy, nonatomic) NSString *imgUrlN1; // @synthesize imgUrlN1=imgUrlN1_;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=imgUrl_;
@property(copy, nonatomic) NSString *jdPrice; // @synthesize jdPrice=jdPrice_;
@property(copy, nonatomic) NSString *adWords; // @synthesize adWords=adWords_;
@property(copy, nonatomic) NSString *productCode; // @synthesize productCode=productCode_;
@property(copy, nonatomic) NSString *name; // @synthesize name=name_;
- (void).cxx_destruct;
- (void)setupDiffSizeImageUrl;
- (id)replaceURL:(id)arg1 replaceString:(id)arg2;
- (void)dealloc;
- (id)copy;
- (void)setDataWithDic:(id)arg1;

@end
