//
//  main.cpp
//  DataSizes
//
//  Created by Philip Lombardo on 5/28/15.
//  Copyright (c) 2015 Philip Lombardo. All rights reserved.
//

#include <iostream>

#include <cstdint>
// This accesses fixed width integer names (like int16_t) that guarantee an integer has the same size on all platforms.  If we're working cross platform, it is best to consider these.


/*
 Best practices for integers:
 1) Use int if the size of the integer will not be very large.
 2) Use the fixed length integers (int16_t) for all other cases.
 3) Only use signed integers, unless there is a very compelling reason to use unsigned.
*/


uint8_t integerProblem(uint8_t x)
{
    return 3*x;
}

int main()
{
    
    using namespace std;
    cout << "bool:\t\t\t" << sizeof(bool) << " bytes" << endl;
    cout << "char:\t\t\t" << sizeof(char) << " bytes" << endl;
    cout << "wchar_t:\t\t" << sizeof(wchar_t) << " bytes" << endl;
    cout << "char16_t:\t\t" << sizeof(char16_t) << " bytes" << endl; // C++11, may not be supported by your compiler
    cout << "char32_t:\t\t" << sizeof(char32_t) << " bytes" << endl; // C++11, may not be supported by your compiler
    cout << "short:\t\t\t" << sizeof(short) << " bytes" << endl;
    cout << "int:\t\t\t" << sizeof(int) << " bytes" << endl;
    cout << "long:\t\t\t" << sizeof(long) << " bytes" << endl;
    cout << "long long:\t\t" << sizeof(long long) << " bytes" << endl; // C++11, may not be supported by your compiler
    cout << "float:\t\t\t" << sizeof(float) << " bytes" << endl;
    cout << "double:\t\t\t" << sizeof(double) << " bytes" << endl;
    cout << "long double:\t" << sizeof(long double) << " bytes" << endl<<endl<<endl;
    
    cout << "Fixed-length integer types:"<<endl;
    cout << "------------------------------------------------------"<<endl;

    cout << "int8_t: \t " << sizeof(int8_t) <<" byte"<< "\t | \t"<< "Range -128 to 127" <<endl<<endl;
    
    // uint8_t gives an "unsigned" integer of one byte. In genera a "uint..." is an unsigned integer.
    cout << "uint8_t: \t " << sizeof(uint8_t) << " byte" << "\t | \t"<< "Range -128 to 127"<< endl <<endl;
    
    cout << "int16_t: \t " << sizeof(int16_t) <<" bytes"<< "\t | \t"<< "Range -32,768 to 32,767" <<endl<<endl;
    cout << "int32_t: \t " << sizeof(int32_t) <<" bytes"<< "\t | \t"<< "Range -9,223,372,036,854,775,808 to"<< endl;
    cout <<"\t \t \t \t \t \t \t   9,223,372,036,854,775,807" <<endl;
    
    cout << "------------------------------------------------------"<<endl;
    
    cout << endl<<endl<<endl;
    
    cout << integerProblem(-3);

    
    return 0;
}