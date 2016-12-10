//
//  Employee.h
//  machinetestInserUpdatedeleteCoredata
//
//  Created by Student on 29/11/16.
//  Copyright (c) 2016 Student. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Employee : NSManagedObject

@property (nonatomic, retain) NSNumber * empid;
@property (nonatomic, retain) NSData * empimg;
@property (nonatomic, retain) NSString * empname;

@end
