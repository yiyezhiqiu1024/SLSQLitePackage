//
//  SLStu.h
//  SQLitePackage
//
//  Created by CoderSLZeng on 2017/10/19.
//  Copyright © 2017年 GitHub. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SLStu : NSObject
{
    int b;
}
@property (nonatomic, assign) int stuNum;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) int age;
@property (nonatomic, assign) float score;
@end
