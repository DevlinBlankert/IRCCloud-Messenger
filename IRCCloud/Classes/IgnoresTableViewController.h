//
//  IgnoresTableViewController.h
//
//  Copyright (C) 2013 IRCCloud, Ltd.
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.


#import <UIKit/UIKit.h>
#import "IRCCloudJSONObject.h"

@interface IgnoresTableViewController : UITableViewController<UIAlertViewDelegate,UITextFieldDelegate> {
    NSArray *_ignores;
    UIBarButtonItem *_addButton;
    int _cid;
    UILabel *_placeholder;
    UIAlertView *_alertView;
}
@property (strong, nonatomic) NSArray *ignores;
@property int cid;
@end