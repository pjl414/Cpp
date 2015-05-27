//
//  main.cpp
//  HelloWorld
//
//  Created by Philip Lombardo on 5/21/15.
//  Copyright (c) 2015 Philip Lombardo. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    // std::cout << "Hello, World!\n";
    // return 0;
    
    /*std::cout <<"Please Enter a number: ";
    int x;
    x=0;
    std::cin >> x; //reads input from keyboard and stores into variable slot x
    std::cout << "One minus your number is: " << x-1 << std::endl;
    return 0;*/
    
    // the cout and cin commands require a "namespace qualifier" of std:: to indicate the library where cout/cin live.
    // we can avoid this repetitive std::cout, std::cin command in two ways:
    /*   1) using std:cout   (this has the system always resolve cout to std:cout)
         2) using namespace std;  (tells compiler we are using all names from std libary)
     The second option is sometimes avoided because if you use many libraries, there is a possibility that name conflicts
     may arise. 
     */
    
    using namespace std;
    cout << "Please enter a number: ";
    int x;
    x=0;
    cin >> x;
    cout << "Twice your number is: " << 2*x << endl;
    return 0;
    
}
