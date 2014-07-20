//
//  ViewController.h
//  Caaaards
//
//  Created by Keagan Soakell-Ho on 7/07/14.
//  Copyright (c) 2014 MtEden CodeLab. All rights reserved.
//
// Abstract CardGameViewController.

#import <UIKit/UIKit.h>
#import "Deck.h"

@interface CardGameViewController : UIViewController

// Abstract method, to be overridden by the subclass
- (Deck *) initializeDeck;

@end
