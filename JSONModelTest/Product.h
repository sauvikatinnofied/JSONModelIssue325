//
//  Product.h
//  JSONModelTest
//
//  Created by Sauvik Dolui on 5/13/15.
//  Copyright (c) 2015 Innofied Solution Pvt. Ltd. All rights reserved.
//

#import "JSONModel.h"

@interface Product : JSONModel
@property (nonatomic, strong) NSString *id;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, assign) float price;
@end
