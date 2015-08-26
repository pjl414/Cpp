//
//  main.cpp
//  C3Operators
//
//  Created by Philip Lombardo on 7/17/15.
//  Copyright (c) 2015 Philip Lombardo. All rights reserved.
//

/*  Some notes.
 Like with arithmetic operations, coding operations have an order of operations.  Consider this
 x= 4 + 5*2.  The precedence levels of these operators in decreasing order is *, +, =.  Hence,
 our statement is really  (x= (4 + (5*2))).  When operators all share the same precedence, we use 
 an associativity direction to determine how to compute the expression.  For example, 3+ 4+ 5+ 6 
 uses the + operator, which has a R->L associativity:  3+(4+(5+6)).  Careful, not all operators 
 have the same associativity direction!  See table from Section 3.1 of learncpp.com.
 
 **Careful with integer division!  When dividing two integers, cpp will resolve to another integer. 
 Generally, it leaves us with [[7/2]] = 3 (the integer part function in math). We can use static
 casting to divide integers and get a floating point answer though. See Pr1 below.
 
 ** Careful with dividing negative integers; if the answer is negative, Cpp will always default
 to rounding up toward zero. Re-run Pr1 but use some negative integers.
 
 In R, %% represents the modulus operator.  In Cpp, its just one %. See Pr2 which uses the % to
 print a list up to 100 with a new line every 20 numbers.
 
 We can use arithmetic assignment operators to shortcut commands like x=x+1. Instead, we could 
 write x+=1.  Since arith. assign. operators have R->L associativity, this means assign x the 
 value 1 added to x.  Similary, x-=y would compute x-y and use that as the new value of x.  Notice
 how we could change the last line of Pr2 to use the arith assign operator +=.
 
 Finally, you will notice that we don't have an exponential operator!  The ^ used in things like 
 sage is the Cpp logical operator for XOR (which is true only when the two statements have 
 different truth values).  Instead, we must load the cmath library and make use of the 
 pow(base,exponent) function. See Pr3.
 
*/

#include <cmath>      //needed for pow() function.
#include <iostream>

bool isEven(long long x) {
    return x%2==0;
}

int main(int argc, const char * argv[]) {

    using namespace std;
    
    //Pr1
    /*
    cout<< "Please enter an integer: ";
    int n1;
    cin>> n1;
    cout<< "Please enter another integer: ";
    int n2;
    cin>> n2;
    cout<< "int/int = " << n1/n2<<"\n";
    cout<< "int/double = " << n1/static_cast<double>(n2)<<"\n";
    cout<< "double/double = "<< static_cast<double>(n1)/static_cast<double>(n2)<<"\n";
    */
    
    //Pr2
    /*
    int count(1);   // Starts a count variable at 1. next we use a "while-loop".
    while (count<=100){
        cout<<count<<" ";
        if (count%20==0){
            cout<<"\n";
        }
        
        //count=count+1;      //updates the count to proceed to the next integer.
        count+=1;               // updates count using the arith assignment operator.
    }
    */
    
    //Pr3
    /*
    cout<< "Please enter an base: ";
    double b;
    cin>>b;
    cout<< "Please enter an exponent: ";
    double e;
    cin>>e;
    cout<<"We have "<<b<<"^"<<e<<" = "<<pow(b,e);
    */
    
    //Quiz Pr
    cout<<"Please enter an integer: ";
    long long  x;
    cin>> x;
    if (isEven(x)==true) {
        cout<< x<<" is even.";
    } else {
        cout<< x<<" is odd.";
    }
    // If we want to use fixed width integers, (int16_1), remember we need to load
    // #include <cstdint> at the beginning.   For this program we just used long long. 
    
    
    return 0;
}
