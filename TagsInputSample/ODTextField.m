//
//  ODTextField.m
//  TagsInputSample
//
//  Created by Orlando de Frias on 9/8/16.
//  Copyright © 2016 TheLightPrjg. All rights reserved.
//

#import "ODTextField.h"

@implementation ODTextField

- (void)deleteBackward {
  if ([self.text length] == 0) {
    if ([self.keyTapDelegate respondsToSelector:@selector(textFieldDidDeleteBlankString:)]) {
      [self.keyTapDelegate textFieldDidDeleteBlankString:self];
    }
  }
  
  [super deleteBackward];
}

@end
