//
//  ViewController.h
//  machinetestInserUpdatedeleteCoredata
//
//  Created by Student on 29/11/16.
//  Copyright (c) 2016 Student. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (nonatomic, retain)UIImage *img;

@property (weak, nonatomic) IBOutlet UITextField *empidtf;

@property (weak, nonatomic) IBOutlet UITextField *empnametf;

@property (weak, nonatomic) IBOutlet UIImageView *image1;
@property (weak, nonatomic) IBOutlet UIImageView *image2;

@property (weak, nonatomic) IBOutlet UIImageView *image3;
- (IBAction)Savedatabase:(id)sender;

- (IBAction)updatedatabase:(id)sender;
@property (weak, nonatomic) IBOutlet UISegmentedControl *segment;

- (IBAction)segmentcontrolclicked:(id)sender;
- (IBAction)deletealldatabseclicked:(id)sender;

- (IBAction)findfromdatabse:(id)sender;


@end

