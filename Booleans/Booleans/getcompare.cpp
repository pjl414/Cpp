//
//  getcompare.cpp
//  Booleans
//
//  Created by Philip Lombardo on 5/29/15.
//  Copyright (c) 2015 Philip Lombardo. All rights reserved.
//

#include "getcompare.h"
#include <iostream>

int enterValue()
{
    int x;
    std::cout<< "Please enter an integer: ";
    std::cin>> x;
    return x;
    
}

bool isEqual(int x, int y)
{
    return (x==y); // the "==" returns a true or false answer to comparing two numbers.
}