//
//  main.cpp
//  SingleDigitPrimeTester
//
//  Created by Philip Lombardo on 5/29/15.
//  Copyright (c) 2015 Philip Lombardo. All rights reserved.
//

#include <iostream>

#include "find_prime.h"



int main()
{
    using namespace std;
    
    cout<< "Please enter a single digit, positive integer: ";
    int x;
    cin >> x;
    
    if (!testDigit(x))
        cout<<"This is not a single digit integer.";
    else if (!testPositive(x))
        cout << "This integer is not positive.";
    else if (findPrime(x))
        cout<< "The number "<<x<<" is prime!"<<endl;
    else
        cout<<"The number "<<x<<" is not prime.\a :("<<endl;
    

    return 0;
}
