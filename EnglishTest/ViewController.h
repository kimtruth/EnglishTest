//
//  ViewController.h
//  EnglishTest
//
//  Created by Truth on 2015. 12. 10..
//  Copyright © 2015년 Truth. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{
    NSArray * eng;
    NSMutableArray * exam;
    NSString * answer;
    int index;
}
@property (weak, nonatomic) IBOutlet UILabel *question_lbl;
@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *answer_btns;

@end

