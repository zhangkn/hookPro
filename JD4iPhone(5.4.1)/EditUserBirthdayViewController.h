//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIDatePicker, UIView;

@interface EditUserBirthdayViewController : UIViewController <UIGestureRecognizerDelegate>
{
    id <EditUserBirthdayDelegate> _delegate;
    NSString *_currentDateTimeString;
    UIDatePicker *_datePicker;
    UIView *_alphaView;
}

@property(retain, nonatomic) UIView *alphaView; // @synthesize alphaView=_alphaView;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) NSString *currentDateTimeString; // @synthesize currentDateTimeString=_currentDateTimeString;
@property(nonatomic) __weak id <EditUserBirthdayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configDatePickerView;
- (void)configToolBarView;
- (void)validateAndDoDelegateWithSelector:(SEL)arg1 objcet:(id)arg2;
- (void)datePickerValueChanged:(id)arg1;
- (id)dateFormatter;
- (void)cancelClick;
- (void)okClick;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

