//
//  power.h
//  PreProcessorExample
//
//  Created by Philip Lombardo on 5/27/15.
//  Copyright (c) 2015 Philip Lombardo. All rights reserved.
//

#ifndef __PreProcessorExample__power__
// This checks whether __PreProcessorExample__power__ has been defined already.  If it has, then nothing below is included.
// If this hasn't been defined yet, it adds the contents below.  This guarantees only one copy of these decalarations appear
// in our main.cpp file.

#define __PreProcessorExample__power__

#include <stdio.h>

int square(int x);

int cube(int x);

int fourth(int x);

#endif /* defined(__PreProcessorExample__power__) */
