//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MDRTEmotionItem : NSObject
{
    NSString *_imageName;
    long long _imageLocation;
    struct CGRect _imageBounds;
}

@property(nonatomic) struct CGRect imageBounds; // @synthesize imageBounds=_imageBounds;
@property(nonatomic) long long imageLocation; // @synthesize imageLocation=_imageLocation;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (id)initWithName:(id)arg1 location:(long long)arg2;
- (void)dealloc;

@end
