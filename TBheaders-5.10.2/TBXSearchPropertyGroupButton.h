//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CAShapeLayer, UIView;

@interface TBXSearchPropertyGroupButton : UIButton
{
    int _index;	// 8 = 0x8
    unsigned long long _style;	// 16 = 0x10
    CAShapeLayer *_cornerMaskLayer;	// 24 = 0x18
    UIView *_strokeView;	// 32 = 0x20
    UIView *_bottomLine;	// 40 = 0x28
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *strokeView; // @synthesize strokeView=_strokeView;
@property(retain, nonatomic) CAShapeLayer *cornerMaskLayer; // @synthesize cornerMaskLayer=_cornerMaskLayer;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) int index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)resetButtonStyle;
- (void)setButtonStyle:(unsigned long long)arg1;
- (id)initWithButtonText:(id)arg1;

@end
