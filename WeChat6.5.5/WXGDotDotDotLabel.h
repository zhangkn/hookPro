//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class MMTimer, NSArray;

__attribute__((visibility("hidden")))
@interface WXGDotDotDotLabel : UILabel
{
    MMTimer *m_animationTimer;
    unsigned long long m_imageIndex;
    NSArray *_wordList;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSArray *wordList; // @synthesize wordList=_wordList;
- (void).cxx_destruct;
- (void)_startAnimations;
- (void)animateforDuration:(double)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
