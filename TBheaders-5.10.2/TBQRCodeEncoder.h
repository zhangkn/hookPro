//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSString, QRCodeEncodeHints, UIImage;

@interface TBQRCodeEncoder : NSObject
{
    _Bool _loadImageCompleted;	// 8 = 0x8
    _Bool _transformURLCompleted;	// 9 = 0x9
    NSLock *_lock;	// 16 = 0x10
    UIImage *_qrBgImage;	// 24 = 0x18
    NSString *_qrContent;	// 32 = 0x20
    NSString *_shortName;	// 40 = 0x28
    NSString *_cacheKey;	// 48 = 0x30
    QRCodeEncodeHints *_encodeHints;	// 56 = 0x38
}

@property(retain, nonatomic) QRCodeEncodeHints *encodeHints; // @synthesize encodeHints=_encodeHints;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(retain, nonatomic) NSString *qrContent; // @synthesize qrContent=_qrContent;
@property(retain, nonatomic) UIImage *qrBgImage; // @synthesize qrBgImage=_qrBgImage;
@property(nonatomic) _Bool transformURLCompleted; // @synthesize transformURLCompleted=_transformURLCompleted;
@property(nonatomic) _Bool loadImageCompleted; // @synthesize loadImageCompleted=_loadImageCompleted;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
- (void).cxx_destruct;
- (void)cacheImage:(id)arg1;
- (id)encodeHints:(id)arg1;
- (void)encodeIfCompleted:(unsigned long long)arg1 qrImageize:(double)arg2 completedBlock:(CDUnknownBlockType)arg3;
- (void)encode:(id)arg1 imageURL:(id)arg2 qrImageSize:(double)arg3 type:(unsigned long long)arg4 hints:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)encode:(id)arg1 image:(id)arg2 qrImageSize:(double)arg3 type:(unsigned long long)arg4 hints:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)encode:(id)arg1 bgImage:(id)arg2 qrImageSize:(double)arg3 type:(unsigned long long)arg4 hints:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)encode:(id)arg1 bgImageURL:(id)arg2 qrImageSize:(double)arg3 type:(unsigned long long)arg4 hints:(id)arg5 callback:(CDUnknownBlockType)arg6;

@end

