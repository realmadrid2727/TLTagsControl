//
//  TLTagsControl.h
//  TagsInputSample
//
//  Created by Антон Кузнецов on 11.02.15.
//  Copyright (c) 2015 TheLightPrjg. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TLTagsControl;

@protocol TLTagsControlDelegate <NSObject>

@optional

- (void)tagsControl:(TLTagsControl *)tagsControl tappedAtIndex:(NSInteger)index;
- (void)tagsControl:(TLTagsControl *)tagsControl deletedTag:(NSString *)tag;

@end

typedef NS_ENUM(NSUInteger, TLTagsControlMode) {
    TLTagsControlModeEdit,
    TLTagsControlModeList,
};

@interface TLTagsControl : UIScrollView

@property (nonatomic, strong) NSMutableArray *tags;
@property (nonatomic, strong) UIColor *tagsBackgroundColor;
@property (nonatomic, strong) UIColor *tagsTextColor;
@property (nonatomic, strong) UIColor *tagsDeleteButtonColor;
@property (nonatomic, strong) NSString *tagPlaceholder;
@property (nonatomic) TLTagsControlMode mode;
@property (assign, nonatomic) id<TLTagsControlDelegate> tapDelegate;

// String of characters that, when entered, will add a new tag made up of the textbox's text; defaults to only return key
@property (nonatomic, strong) NSString *delimiters;

// Character set of characters allowed to comprise a tag; defaults to alphanumeric
@property (nonatomic, strong) NSMutableCharacterSet *allowableCharacterSet;

- (id)initWithFrame:(CGRect)frame andTags:(NSArray *)tags withTagsControlMode:(TLTagsControlMode)mode;

- (void)addTag:(NSString *)tag;
- (void)reloadTagSubviews;

@end