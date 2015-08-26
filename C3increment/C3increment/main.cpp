//
//  main.cpp
//  C3increment
//
//  Created by Philip Lombardo on 7/19/15.
//  Copyright (c) 2015 Philip Lombardo. All rights reserved.
//


/*
 
 The '++' and '--' operators can be used to increment or decrement an integer and evaluate a value of a variable in one shot.  The position of the operator with respect to the variable determines whether the variable is incremented and then evaluated, or vice versa. Consider Pr1 and Pr2 below.
 
 Side effects: a side effect is result of a piece of coding (operation, expression, etc.) that persists even after that piece of the code has been evaluated.  For example, the assignment operator x=5; has the side effect of changing the value of x permanently (or until a new assignment occurs...).  
 
 C++ does not define
 
 
 
 
*/

#include <iostream>

int add(int x, int y){
    return x+y;
}

int main(int argc, const char * argv[]) {
    using namespace std;
   
    int x(5);
    int w(5);
    
    //Pr1
    ///*
    int y;
    int z;
    y=++x;      // x is first incremented to 6, then y is assigned to x's current value (6).
    z=w++;      // z is first assigned to w's current value (5), then w is incremented to 6.
    cout<< "x = "<< x << ", "<<"y = "<<y<<",\n"<< "z = "<<z<< ", and w = "<<w << "\n \n";
    //*/
    
    //Pr2
    /*
    cout<< "starting values: \t\t "<<x<< " and " << w<<"\n";
    cout << "++x and --w values: \t "<<++x << " and " << --w<< "\n";
    cout<<"reprinting x and w:  \t "<< x<< " and " << w<<"\n";
    cout << "x++ and w-- values: \t "<<x++ << " and " <<w--<< "\n";
    cout << "(Notice that the values of x and w \n do not change until after the printout.)\n";
    cout<<"reprinting x and w: \t "<< x<< " and " << w<<"\n";
    */
    
    
    //Pr3
    ///*
    
     
    //*/
    
    
    
    return 0;
}
