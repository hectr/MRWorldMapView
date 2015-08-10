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

- (void)worldMap:(MRWorldMapView *)map didHighlightCountry:(NSString *)code
{
    if (code) {
        NSLog(@"highlighted country: %@", code);
    }
}

- (void)worldMap:(MRWorldMapView *)map didSelectCountry:(NSString *)code
{
    NSLocale *locale = NSLocale.currentLocale;
    NSString *countryName = [locale displayNameForKey:NSLocaleCountryCode value:code];
    self.label.text = countryName;
}

#pragma mark - UIScrollViewDelegate

- (UIView *)viewForZoomingInScrollView:(UIScrollView *)scrollView
{
    return self.contentView;
}

- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate
{
    if (!decelerate) {
        self.worldMapView.highlightedCountry = nil;
        [self.worldMapView setNeedsDisplay];
    }
}

- (void)scrollViewDidEndDecelerating:(UIScrollView *)scrollView
{
    self.worldMapView.highlightedCountry = nil;
    [self.worldMapView setNeedsDisplay];
}

#pragma mark - UIView

- (void)viewDidLoad {
    [super viewDidLoad];
    self.scrollView.minimumZoomScale = 1.0f;
    self.scrollView.maximumZoomScale = 4.0f;
    self.worldMapView.mapInset = UIEdgeInsetsMake(50.0f, 0.0f, 0.0f, 0.0f);
}

@end
