//
//  main.cpp
//  Chap2Test3
//
//  Created by Philip Lombardo on 6/29/15.
//  Copyright (c) 2015 Philip Lombardo. All rights reserved.
//

#include <iostream>

#include "enter.h"

#include "performOperation.h"


int main(int argc, const char * argv[]) {
    using namespace std;
    
    double double1;
    double1 = enterDouble(double1);
    double double2;
    double2 = enterDouble(double2);
    
    char operation;
    operation = enterOperation(operation);
    
    if (operationCheck(operation))
        cout<<double1<<" "<<operation<<" "<<double2<< " is "<<doOperation(double1, double2, operation)<<endl;
    else
        cout<< "You did not enter a valid operation from the list. Please restart the program.";
    
    
    return 0;
}
