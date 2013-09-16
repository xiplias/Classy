//
//  NSRegularExpression+MODAdditions.h
//  Mod
//
//  Created by Jonas Budelmann on 17/09/13.
//  Copyright (c) 2013 cloudling. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSRegularExpression *MODRegex(NSString *pattern);

@interface NSRegularExpression (MODAdditions)

- (NSString *)mod_firstMatchInString:(NSString *)string;
- (NSUInteger)mod_replaceMatchesInString:(NSMutableString *)string withTemplate:(NSString *)templ;

@end
