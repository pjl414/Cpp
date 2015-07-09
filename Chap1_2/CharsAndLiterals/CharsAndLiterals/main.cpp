//
//  main.cpp
//  CharsAndLiterals
//
//  Created by Philip Lombardo on 6/22/15.
//  Copyright (c) 2015 Philip Lombardo. All rights reserved.
//

/*
In this program, we explore the following data type: chars.  The char data-type is technically an integer; however, each integer is usually interpreted as an ASCII character (American Standard Code for Information Interchage).  For example, the integer 97 is often associated with the keyboard letter 'a'.  A full list is availabe on the learncpp.com website, lesson 2.7.
 
 There are two ways to initialize the char integer 97: 1) char ch1(97), or 2) char ch2('a').  Notice that when dealing with a char, we use single quotes. This can lead to trouble because ch(37) and ch('37') are two different integers! See below.  When placing a keyboard command inside single-quotes, we are calling the code point for that keyboard character. So ch('a') would initialize the char 97 using a code point.
 
 
 */

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
  
// Compare ch(37) with ch2('37').  Comment out the /* stuff to run.
/*
    char ch1(37);
    char ch2('37');
    
    cout << ch << " versus " << ch2 << endl;
*/
    
// Type casting with static_cast<int>(expression)
/*
    char ch(97);
    int i(ch);
    cout << ch << " versus "<< i << endl;
    // as pointed out on learncpp, this is a clunky way of gettging the integer value of a char.
    cout << ch << " corresponds to " << static_cast<int>(ch);
*/
    
//Inputting chars, and queing
    cout << "Please input three keyboard characters: " << endl;
    char ch;
    cin >> ch;
    cout<< "We know the first character "<< ch << " has ASCII code "<< static_cast<int>(ch)<<"."<< endl;
    
    // You will notice that the program will only give the ASCII code for the first character.  The other two are in the input queue, and we can collect them by requesting additional input in the code.
    
    cin >> ch;
    cout<< "We know the second character "<< ch << " has ASCII code "<< static_cast<int>(ch)<<"."<< endl;
    cin >> ch;
    cout<< "We know the third character "<< ch << " has ASCII code "<< static_cast<int>(ch)<<"."<< endl;
    
    // If we were to enter four characters at the first prompt, only the first three would have their ASCII code's printed.

// Escape sequences "\n" 

    return 0;
}
