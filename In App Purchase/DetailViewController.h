//
//  DetailViewController.h
//  In App Purchase
//
//  Created by Movivation on 18/02/13.
//  Copyright (c) 2013 Movivation. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
