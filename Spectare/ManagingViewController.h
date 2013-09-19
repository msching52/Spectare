//
//  ManagingViewController.h
//  Spectare
//
//  Class to to create view subclasses with CoreData context available.
//
//  Created by Martin Schingenga on 19-09-13.
//  Copyright (c) 2013 Martin Schingenga. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ManagingViewController : NSViewController {
    NSManagedObjectContext *managedObjectContext;
}
@property (strong) NSManagedObjectContext *managedObjectContext;

@end
