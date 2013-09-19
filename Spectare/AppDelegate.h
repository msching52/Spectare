//
//  AppDelegate.h
//  Spectare - Multi Media Center
//
//  Created by Martin Schingenga on 11-09-13.
//  Copyright (c) 2013 Martin Schingenga. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "ManagingViewController.h"


@interface AppDelegate : NSObject <NSApplicationDelegate> {

    NSMutableArray *viewControllers;
}

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;
- (IBAction)changeViewController:(id)sender;

- (void) displayViewController:(ManagingViewController *)vc;

@property (weak) IBOutlet NSBox *box;

@end
