//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "QAnnotation-Protocol.h"

@class MMHeadImageAnnotationView, NSString, UserPositionItem;

__attribute__((visibility("hidden")))
@interface MMHeadImageAnnotation : MMObject <QAnnotation>
{
    UserPositionItem *_userPositionItem;
    MMHeadImageAnnotationView *_annotationView;
    _Bool _showCallout;
}

@property(readonly, nonatomic) _Bool showCallout; // @synthesize showCallout=_showCallout;
@property(nonatomic) __weak MMHeadImageAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
@property(retain, nonatomic) UserPositionItem *userPositionItem; // @synthesize userPositionItem=_userPositionItem;
- (void).cxx_destruct;
- (void)setShowCallout:(_Bool)arg1 Animated:(_Bool)arg2;
- (void)setHeading:(double)arg1;
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)dealloc;
- (id)initWithUserPostionItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
