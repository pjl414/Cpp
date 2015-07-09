//
//  main.cpp
//  ForwardDec
//
//  Created by Philip Lombardo on 5/26/15.
//  Copyright (c) 2015 Philip Lombardo. All rights reserved.
//

/* 
In general, functions must be ordered sequentially so that if main() uses a function getValue() in its execution, we must 
make sure that getValue() comes BEFORE the main() function.  With basic programs, it is easy enough to make sure this always
happens; however, as programs grow in complexity this will become a pain. Also, you may want a pair of functions to reference
each other, in which case, it would be impossible to obey this rule.  To accomodate, we use a forward declaration.
 
To use a forward declaration, simply put the function return type, name, and parameters without a function body at the
beginning (this is called a function prototype).This tells the compiler that the function exists before determining what 
precisely the function does.
*/

#include <iostream>

int cube(int x);    //This is the function prototype

int getValue()
{
    using namespace std;
    cout << "Please enter an integer: ";
    int x;
    cin >> x;
    return x;
}

int main(int argc, const char * argv[])
{
    using namespace std;
    int a;
    a = getValue();
    cout << "Your integer cubed is " << cube(a) << ".";
}

int cube(int x)
{
    return x*x*x;
}


/* definition vs. declaration.
*/