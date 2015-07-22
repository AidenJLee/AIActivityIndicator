//
//  AIActivityIndicatorView.h
//  motel
//
//  Created by aidenjlee on 2015. 2. 3..
//  Copyright (c) 2015년 yanolja. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AIActivityIndicatorView : UIActivityIndicatorView

@property (nonatomic, strong) UIImage *image;
@property (nonatomic, assign) BOOL fitFrame;

- (id)initWithImage:(UIImage*)image;

@end
