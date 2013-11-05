//
//  saiAppDelegate.h
//  log
//
//  Created by waghray kunal on 05/11/13.
//  Copyright (c) 2013 sai kunal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface saiAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
