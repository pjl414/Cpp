//
//  main.cpp
//  PreProcessorExample
//
//  Created by Philip Lombardo on 5/27/15.
//  Copyright (c) 2015 Philip Lombardo. All rights reserved.
//

/*
 The preprocessor commands are like small programs that will run just before your compiler. They take the form of #something 
 (called directives), like the #include <iostream> below, or the #include "filename" that we use to link a header file.
 Preprocessor declarations do not end with a ";", rather we just move to the next line.
 
 We use #define to set up a macro.  The example below illustrates how to do this.  The general form looks like
 #define identifier, or #define identifier susbstitution text.   (It's like a \newcommand{}{} in TeX.)
 
 We can also use conditional compiling commands: #ifdef and #endif. These would be placed inside the main() function. The 
 #ifdef checks whether a value has been defined, and when it has the output between #ifdef #endif gets compiled.  The command
 #ifndef compiles only if the value is NOT define.  See "power.h" for an application of these commands beyond the basic one
 below.
*/

//Here is one place to put pre-processor stuff:

#include <iostream>

#include "power.h"

// Here is a #define macro that prints a name. In general, this is not a good use of the #define approach.
#define My_Name "the Power Calculator"

// A #define macro without a substitution text will return nothing. Ironically, these are used quite often and are useful!
#define Print_Joe

//#define Print_Bob




int getValue()
{
    using namespace std;
    cout << "Please enter an integer: ";
    int x;
    cin >> x;
    return x;
}



int main(int argc, const char * argv[]) {
    using namespace std;
    
    #ifdef Print_Joe
        cout << "Joe"<< endl;
        cout << endl;
    #endif
    // Since Print_Joe is defined above in the preprocessor part, "Joe" should be the first text we see from the program.
    
    #ifdef Print_Bob
        cout << "Bob"<< endl;
    #endif
    // Notice that "Bob" is never printed because #define Print_Bob does not appear in the preprocesor part.
    
    cout << "Hello! Welcome to the "<< My_Name <<"."<<endl;
    cout Print_Joe << endl;
    // Notice that nothing is printed here.
   
    int x;
    x = getValue();
    cout << "Your number squared is "               << square(x)    <<"."<< endl;
    cout << "Your number cubed is "                 << cube(x)      <<"."<< endl;
    cout << "Your number to the fourth power is "   << fourth(x)    <<"."<< endl;
    
    return 0;
}
