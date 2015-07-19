//
//  MRViewController.h
//  MRWorldMapView
//
//  Created by hectr on 07/19/2015.
//  Copyright (c) 2015 hectr. All rights reserved.
//

@import UIKit;

#import <MRWorldMapView/MRWorldMapView.h>


@interface MRViewController : UIViewController <UIScrollViewDelegate, MRWorldMapViewDelegate>

@property (nonatomic, weak) IBOutlet MRWorldMapView *worldMapView;
@property (nonatomic, weak) IBOutlet UIView *contentView;
@property (nonatomic, weak) IBOutlet UIScrollView *scrollView;
@property (nonatomic, weak) IBOutlet UILabel *label;

@end
