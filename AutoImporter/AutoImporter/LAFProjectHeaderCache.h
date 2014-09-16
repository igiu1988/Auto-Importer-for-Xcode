//
//  LAFProjectHeaderCache.h
//  AutoImporter
//
//  Created by Luis Floreani on 9/15/14.
//  Copyright (c) 2014 luisfloreani.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LAFProjectHeaderCache : NSObject

@property (nonatomic, readonly) NSString *filePath;

- (instancetype)initWithProjectPath:(NSString *)filePath;
- (NSString *)headerForSymbol:(NSString *)symbol;

@end