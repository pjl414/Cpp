//
//  main.cpp
//  MultipeFileProgram
//
//  Created by Philip Lombardo on 5/26/15.
//  Copyright (c) 2015 Philip Lombardo. All rights reserved.
//

/* 
 
 When calling functions that exist in another file, you need to forward declare those functions.
 
 Rather than constantly updating the forward declations needed to work with many files, it is best to make use of header
 files.  For example, the #inclue <iostream> command at the beginning of these files is calling a header file for the iostream
 library. Header files only DECLARE functions and variables; the definitions are stored elsewhere. In the case of something
 like "cout", the definition is stored in the standard runtime library which is called during the linking phase of building 
 the program.
 
 In the program below, we use cube.cpp to define two functions: cube() and square().  We forward declared the cube() function,
 but now square(). For that we utilize the header-file so that the program will compile. 
 
*/


#include <iostream> // Angle brackets indicate that the header file is included with the compiler so it should look in the
                    // system directories.

#include "cube.h"   // Unlike with iostream, we use quotes to call the file. This indicates that the files is located in the
                    // current directory.

int cube(int x);    // This tells main() that "cube()" is declared elsewhere (i.e. in another file perhaps). Since we included
                    // the header above, this is redundant code.



int main(int argc, const char * argv[])
{
    
    using namespace std;
    
    cout << "Please enter an integer: ";
    int x;
    cin  >> x;
    
    cout << "Your number cubed is "<< cube(x) << "." << endl;       // This was forward declared.
    cout << "Your number squared is "<<square(x)<< ".";             // This uses the cube.h file to alert main()
    
    return 0;
}
