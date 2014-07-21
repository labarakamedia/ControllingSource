//
//  JPMMasterViewController.h
//  ControllingSource
//
//  Created by Jean-Pierre - Dev. on 21/07/14.
//  Copyright (c) 2014 Jean-Pierre. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface JPMMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
