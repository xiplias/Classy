//
//  MODParserSpec.m
//  Mod
//
//  Created by Jonas Budelmann on 15/09/13.
//  Copyright (c) 2013 cloudling. All rights reserved.
//

#import "MODParser.h"

SpecBegin(MODParser)

it(@"should have tests", ^{
    expect(MODParser.new).notTo.beNil();
});

SpecEnd