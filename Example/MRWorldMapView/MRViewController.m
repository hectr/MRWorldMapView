//
//  MRViewController.m
//  MRWorldMapView
//
//  Created by hectr on 07/19/2015.
//  Copyright (c) 2015 hectr. All rights reserved.
//

#import "MRViewController.h"


@interface MRViewController ()
@end


@implementation MRViewController

#pragma mark - MRWorldMapViewDelegate

- (void)worldMap:(MRWorldMapView *)map didSelectCountry:(NSString *)code
{
    self.label.text = code;
}

#pragma mark - UIScrollViewDelegate

- (UIView *)viewForZoomingInScrollView:(UIScrollView *)scrollView
{
    return self.contentView;
}

#pragma mark - UIView

- (void)viewDidLoad {
    [super viewDidLoad];
    self.scrollView.minimumZoomScale = 1.0f;
    self.scrollView.maximumZoomScale = 4.0f;
}

@end
