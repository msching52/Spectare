//
//  SpectareMainController.m
//  Spectare
//
//  Created by Martin Schingenga on 19-09-13.
//  Copyright (c) 2013 Martin Schingenga. All rights reserved.
//

#import "SpectareMainController.h"

@interface SpectareMainController ()

@end

@implementation SpectareMainController

- (id) init {
    
    self = [super initWithNibName:@"SpectareMainView" bundle:nil];
    
    if (self) {
        [self setTitle:@"Spectare"];
    }
    
    return self;
}

@end
