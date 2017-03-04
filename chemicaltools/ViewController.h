//
//  ViewController.h
//  chemicaltools
//
//  Created by 曾晋哲 on 2016/11/2.
//  Copyright © 2016年 曾晋哲. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVOSCloud/AVOSCloud.h>


@interface ViewController : UIViewController{
    UILabel *label_element;
    UITextField *textfield_element;
    UIButton *button_element;
}
@property (nonatomic, retain) IBOutlet UILabel *label_element;
@property (nonatomic, retain) IBOutlet UITextField *textfield_element;
@property (nonatomic, retain) IBOutlet UIButton *button_element;
@property (nonatomic, retain) IBOutlet UITextField *textfield_username;
@property (nonatomic, retain) IBOutlet UITextField *textfield_password;
-(IBAction)element:(id)sender;
-(IBAction)login:(id)sender;

@end

