//
//  CDTodo.h
//  TO-DO
//
//  Created by Siegrain on 16/6/2.
//  Copyright © 2016年 com.siegrain. All rights reserved.
//

#import "CDUser.h"
#import <Foundation/Foundation.h>

@class LCTodo;

NS_ASSUME_NONNULL_BEGIN

@interface CDTodo : NSManagedObject
/* 用来存储photo的UIImage */
@property(nonatomic, readwrite, strong) UIImage *photoImage;
/* 存储NSData */
@property(nonatomic, readwrite, strong) NSData *photoData;
/* 缓存表格单元高度 */
@property(nonatomic, readwrite, assign) CGFloat cellHeight;
/* 上次过期时间，该字段用于 snooze 后移除老位置的数据所用 */
@property(nonatomic, readwrite, strong) NSDate *lastDeadline;
/* 指示该待办事项是否在重新排序中 */
@property(nonatomic, readwrite, assign) BOOL isReordering;

/**
 *  已新建实体的方式用lcTodo创建cdTodo
 */
+ (instancetype)cdTodoWithLCTodo:(LCTodo *)lcTodo inContext:(NSManagedObjectContext *)context;

/**
 *  将cdTodo的部分数据覆盖为指定lcTodo的数据
 */
- (instancetype)cdTodoReplaceByLCTodo:(LCTodo *)lcTodo;
@end

NS_ASSUME_NONNULL_END

#import "CDTodo+CoreDataProperties.h"
