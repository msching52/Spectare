//
//  AudioMainController.m
//  Spectare
//
//  Created by Martin Schingenga on 19-09-13.
//  Copyright (c) 2013 Martin Schingenga. All rights reserved.
//

#import "AudioMainController.h"

@interface AudioMainController ()

@end

@implementation AudioMainController

- (id) init {
    
    self = [super initWithNibName:@"AudioMainView" bundle:nil];
    
    if (self) {
        [self setTitle:@"Audio"];
    }
    
    return self;
}

@end
