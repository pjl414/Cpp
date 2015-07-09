//
//  performOperation.cpp
//  Chap2Test3
//
//  Created by Philip Lombardo on 7/9/15.
//  Copyright (c) 2015 Philip Lombardo. All rights reserved.
//

#include "performOperation.h"


bool operationCheck(char c) {
 int sc(static_cast<char>(c));
 if (sc==42 || sc==43 || sc==45 || sc==47)
 return true;
 else
 return false;
 }

double doOperation(double x, double y, char c) {
    
    //First we read the number of character c and determine if its one of the allowed operations.
    if (static_cast<char>(c)==43)
        return x+y;
    else if (static_cast<char>(c)==45)
        return x-y;
    else if (static_cast<char>(c)==42)
        return x*y;
    else if (static_cast<char>(c)==47)
        return x/y;
    else
        return 0;
}