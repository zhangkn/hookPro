//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrderWareGroupCell.h"

@class OrderListWareGroupModel, OrderWareGroupItemView;

@interface OrderWareGroupNormalCell : OrderWareGroupCell
{
    OrderListWareGroupModel *_wareGroupModel;
    OrderWareGroupItemView *_itemView;
}

+ (double)orderWareItemViewHeightWithOrderListWareModel:(id)arg1;
+ (double)heightForModel:(id)arg1;
@property(retain, nonatomic) OrderWareGroupItemView *itemView; // @synthesize itemView=_itemView;
@property(retain, nonatomic) OrderListWareGroupModel *wareGroupModel; // @synthesize wareGroupModel=_wareGroupModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
