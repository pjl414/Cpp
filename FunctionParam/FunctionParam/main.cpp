//
//  main.cpp
//  FunctionParam
//
//  Created by Philip Lombardo on 5/22/15.
//  Copyright (c) 2015 Philip Lombardo. All rights reserved.
//

// RULE OF THUMB: each function should perform one, and only one task.

#include <iostream>

int GetValueFromUser()
{
    using namespace std;
    cout    << "Please enter an integer: ";
    int     x;
    cin     >> x;
    return  x;
}

int add(int x, int y)
{
    return x+y;
}

// Note that after returning x+y, the variables x and y are destroyed.  This is why we can use x and y in the next function.
// We say x and y have local scope.

int multiply(int x, int y)
{
    return x*y;
}

int main(int argc, const char * argv[]) {
    using namespace std;
    cout    << multiply(add(4+2*3,3*(-1)),2)<<endl;
    
    int a;
    a=GetValueFromUser();
    
    cout    << "Your number cubed is ";
    cout    << multiply(a,multiply(a,a))<< "."<< endl;
    
    return 0;
}
