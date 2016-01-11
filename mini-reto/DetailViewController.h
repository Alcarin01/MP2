//
//  DetailViewController.h
//  mini-reto
//
//  Created by Alcarin Ortiz on 10/01/16.
//  Copyright © 2016 Alcarin Ortiz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

