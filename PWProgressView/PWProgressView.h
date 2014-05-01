//
//  TestView.h
//  PWProgressView
//
//  Created by Peter Willsey on 12/17/13.
//  Copyright (c) 2013 Peter Willsey, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol PWProgressViewDelegate;

@interface PWProgressView : UIView

@property (nonatomic, assign) float progress;
@property (nonatomic, weak) id<PWProgressViewDelegate> delegate;

@end

@protocol PWProgressViewDelegate <NSObject>

- (void)didCompleteProgressView:(PWProgressView *)progressView;

@end
