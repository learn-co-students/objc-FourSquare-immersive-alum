//
//  FISTableViewController.h
//  FourSquare
//
//  Created by Zachary Drossman on 9/17/14.
//  Copyright (c) 2014 Flatiron School. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VenuesTableViewController : UITableViewController

@property (strong, nonatomic) NSMutableArray *venues;

@property (strong, nonatomic) NSString *queryString;
@property (strong, nonatomic) NSNumber *radiusDistance;
@property (strong, nonatomic) NSNumber *currentLatitude;
@property (strong, nonatomic) NSNumber *currentLongitude;

@end
