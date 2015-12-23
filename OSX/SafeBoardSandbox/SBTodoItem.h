//
//  SBTodoItem.h
//  SafeBoardSandbox
//
//  Created by Vladimir Kukushkin on 12/23/15.
//  Copyright © 2015 Vladimir Kukushkin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SBTodoItem : NSObject
{
}

// TODO: add m_id
// todo_sample::TodoItemId totoId;
@property (retain) NSString * todoTitle;
@property (retain) NSString * todoDescription;
@property (retain) NSDate * todoDueDate;

@end
