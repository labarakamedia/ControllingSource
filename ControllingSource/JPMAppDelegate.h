//
//  JPMAppDelegate.h
//  ControllingSource
//
//  Created by Jean-Pierre - Dev. on 21/07/14.
//  Copyright (c) 2014 Jean-Pierre. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JPMAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
