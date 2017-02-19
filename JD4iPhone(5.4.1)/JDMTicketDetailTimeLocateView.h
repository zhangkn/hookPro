//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface JDMTicketDetailTimeLocateView : UIView
{
    CDUnknownBlockType _jumpBlk;
    UIView *_timeArea;
    UIView *_locArea;
    UILabel *_dateRange;
    UILabel *_locate;
    UILabel *_detailLocate;
    NSString *_longitude;
    NSString *_latitude;
}

@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) UILabel *detailLocate; // @synthesize detailLocate=_detailLocate;
@property(retain, nonatomic) UILabel *locate; // @synthesize locate=_locate;
@property(retain, nonatomic) UILabel *dateRange; // @synthesize dateRange=_dateRange;
@property(retain, nonatomic) UIView *locArea; // @synthesize locArea=_locArea;
@property(retain, nonatomic) UIView *timeArea; // @synthesize timeArea=_timeArea;
@property(copy, nonatomic) CDUnknownBlockType jumpBlk; // @synthesize jumpBlk=_jumpBlk;
- (void).cxx_destruct;
- (id)contentLabelWithFrame:(struct CGRect)arg1 WithFont:(id)arg2 WithColor:(id)arg3;
- (void)tapAction:(id)arg1;
- (void)configWithData:(id)arg1;
- (id)lineWithFrame:(struct CGRect)arg1;
- (void)configUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
