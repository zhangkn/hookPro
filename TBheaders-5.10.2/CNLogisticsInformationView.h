//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CNLogisticService, UIImageView, UILabel;

@interface CNLogisticsInformationView : UIView
{
    UIImageView *_compangLogoByName;	// 8 = 0x8
    UILabel *_logisticCompanyLabel;	// 16 = 0x10
    UILabel *_logisticNumberLabel;	// 24 = 0x18
    UILabel *_addree;	// 32 = 0x20
    UILabel *_time;	// 40 = 0x28
    UILabel *_label;	// 48 = 0x30
    CNLogisticService *_orderService;	// 56 = 0x38
}

@property(retain, nonatomic) CNLogisticService *orderService; // @synthesize orderService=_orderService;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UILabel *time; // @synthesize time=_time;
@property(retain, nonatomic) UILabel *addree; // @synthesize addree=_addree;
@property(retain, nonatomic) UILabel *logisticNumberLabel; // @synthesize logisticNumberLabel=_logisticNumberLabel;
@property(retain, nonatomic) UILabel *logisticCompanyLabel; // @synthesize logisticCompanyLabel=_logisticCompanyLabel;
@property(retain, nonatomic) UIImageView *compangLogoByName; // @synthesize compangLogoByName=_compangLogoByName;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getLogisticCompangLogoByName:(id)arg1;
- (id)initWithOrderId:(id)arg1;

@end
