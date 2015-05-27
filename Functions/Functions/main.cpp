//
//  main.cpp
//  Functions
//
//  Created by Philip Lombardo on 5/21/15.
//  Copyright (c) 2015 Philip Lombardo. All rights reserved.
//

#include <iostream>

// void indicates that the function will not return any value to caller (operating system)
void doPrint()
{
    std::cout << "In doPrint()"<< std::endl;
}

// uses cin to get an integer form user and send that back to the caller (operating system)
int GetValueFromUser()
{
    using namespace std;
    cout << "Please enter an integer: ";
    int a;
    a=0;
    cin >> a;
    return a;
}

// int means that this function returns an integer to the caller. As such, it requires a "return (integer);" statement
int main(int argc, const char * argv[]) {
    using namespace std;
    int x=GetValueFromUser();
    int y=GetValueFromUser();
    cout << x << " times " << y << " = " << x*y << endl;
    return 0;
}

// Do not nest functions. Write them separately above main(), then call them inside