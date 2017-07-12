//
//  ViewController.h
//  Example-iOS
//
//  Created by Skylar Schipper on 4/27/17.
//  Copyright © 2017 Skylar Schipper. All rights reserved.
//

@import UIKit;
@import Pollock;

@interface ViewController : UIViewController

@property (nonatomic, weak) IBOutlet POLDrawingView *drawingView;

- (IBAction)clearAllDrawingsAction:(id)sender;

- (IBAction)saveDrawingsAction:(id)sender;

@end

