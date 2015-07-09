//
//  enter.cpp
//  Chap2Test3
//
//  Created by Philip Lombardo on 7/9/15.
//  Copyright (c) 2015 Philip Lombardo. All rights reserved.
//
#include <iostream>
#include "enter.h"


double enterDouble(double x) {
    using namespace std;
    cout<< "Enter a double value: ";
    cin>> x;
    
    return x;
}

char enterOperation(char x) {
    using namespace std;
    cout<< "Enter one of the following values: +, -, *, or / : ";
    cin>> x;
    
    return x;
}