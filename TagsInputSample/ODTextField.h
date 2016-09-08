//
//  ODTextField.h
//  TagsInputSample
//
//  Created by Orlando de Frias on 9/8/16.
//  Copyright © 2016 TheLightPrjg. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ODTextField;

@protocol ODTextFieldDelegate <NSObject>

- (void)textFieldDidDeleteBlankString:(ODTextField *)textField;

@end

@interface ODTextField : UITextField

@property (strong, nonatomic) id<ODTextFieldDelegate>keyTapDelegate;

@end
