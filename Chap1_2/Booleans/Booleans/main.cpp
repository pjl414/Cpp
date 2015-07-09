//
//  main.cpp
//  Booleans
//
//  Created by Philip Lombardo on 5/29/15.
//  Copyright (c) 2015 Philip Lombardo. All rights reserved.
//

#include <iostream>

#include <iomanip> // for boolalpha

#include "getcompare.h"


int main(int argc, const char * argv[]) {
    using namespace std;
    
    bool b1;
    b1= true;
    
    bool b2(false); // sets the boolean value b2 to false, implicitly initialization.
    
    // The not-operator is "!".

    cout<< b2<< " or "<< !b2<<endl;
    // The outputs are in terms of 0 or 1, where 0 corresponds to false and 1 correspond to true. Uncomment below:
    cout<<boolalpha;
    cout<< b2<< " or "<< !b2<< endl<<endl<<endl;
    
    
    // Consider the if-else statements with booleans.  They take the general form " if (condition) statement; else statement 2;  If the condition is a boolean value of "true" we go with the if-statement. A boolean value of false goes with the else-statement.
    
    if (b2)
        cout<< "b2 is true"<<endl;
    else
        cout<< "b2 is false"<< endl;
    
    
    // A more complicated program using booleans.  Notice we creat two new function (isEqual and getValue) and link them with a header.
    int x;
    x=enterValue();
    
    int y;
    y=enterValue();
    
    if (isEqual(x,y))
        cout<< x<<" is equal to "<< y << endl;
    else
        cout << x<< " is not equal to " << y <<endl;
    
    
    return 0;
}










