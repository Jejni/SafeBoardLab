//
//  TodoManager.h
//  SafeBoardSandbox
//
//  Created by Vladimir Kukushkin on 12/26/15.
//  Copyright © 2015 Vladimir Kukushkin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TodoItem.h"

@interface TodoManager : NSObject
{
    NSMutableArray<TodoItem*> * m_items;
}

@property (nonatomic, readonly) NSArray<TodoItem*> * items;
@property (nonatomic, readonly) BOOL isConnected;
@property (nonatomic, readonly) BOOL isConnecting;

- (void)createObject;
- (void)removeObjectAtIndex:(NSInteger)index;
- (void)updateTitleforObjectAtIndex:(NSInteger)index withValue:(NSString*)newValue;
- (void)updateDescriptionforObjectAtIndex:(NSInteger)index withValue:(NSString*)newValue;
- (void)updateDueDateforObjectAtIndex:(NSInteger)index withValue:(NSDate*)newValue;

- (IBAction)connect:(id)sender;
- (IBAction)disconnect:(id)sender;

@end
