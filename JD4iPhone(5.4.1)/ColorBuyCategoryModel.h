//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

#import "NSCoding.h"

@class NSString;

@interface ColorBuyCategoryModel : JDModel <NSCoding>
{
    int cateLevel_;
    int cateNum_;
    NSString *doc_;
}

@property(nonatomic) int cateNum; // @synthesize cateNum=cateNum_;
@property(nonatomic) int cateLevel; // @synthesize cateLevel=cateLevel_;
@property(copy, nonatomic) NSString *doc; // @synthesize doc=doc_;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setDataWithDic:(id)arg1;

@end
