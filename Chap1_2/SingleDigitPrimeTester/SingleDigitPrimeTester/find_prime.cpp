//
//  find_prime.cpp
//  SingleDigitPrimeTester
//
//  Created by Philip Lombardo on 5/29/15.
//  Copyright (c) 2015 Philip Lombardo. All rights reserved.
//

#include "find_prime.h"


bool testDigit(int x)
{
    if (x<10)
        return true;
    else
        return false;
}

bool testPositive(int x)
{
    if (x>0)
        return true;
    else
        return false;
}

bool findPrime(int x)
{
    if (x==2)
        return true;
    if (x==3)
        return true;
    if (x==5)
        return true;
    if (x==7)
        return true;
    else
        return false;
}