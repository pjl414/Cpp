//
//  main.cpp
//  FloatingPoint
//
//  Created by Philip Lombardo on 5/29/15.
//  Copyright (c) 2015 Philip Lombardo. All rights reserved.
//

#include <iostream>

#include <iomanip> // for setprecision(number)

int main(int argc, const char * argv[]) {
    // insert code here...
    
    using namespace std;
    cout << "float size = "<< sizeof(float)<< " bytes"<<endl;
    cout << "double size = " << sizeof(double)<< " bytes"<<endl;
    cout << "long double size = " << sizeof(long double)<< " bytes"<<endl<<endl;
    
    // Some implicit initilizations and definitions:
    int n(5);
    cout << n <<" \t | \t ";
    
    double d(8.0);  // when storing an integer as a float, it is convention to use at least one decimal
    cout << d<<" \t | \t ";
    
    float f(3.0f);  // the suffix "f" indicates we are using a float.
    cout << f<<" \t | \t "<<endl<<endl;
    
    
    // Cpp recognizes scientific notation in using floats:
    double d2(8e2);
    cout<< d2<<" \t | \t ";
    float f2(8.2e-3);
    cout<< f2<< endl<<endl;
    
    
    // Signifant digits are stored in the significand, and then the exponent of 10 is stored separately. The number of digits in the significand is equivlane to the number of "significant figures" (remember chemistry?).  This deals with the precision of a number.  Numbers with more significant figures are more precise.
    // We can set the precision of a float (our double etc) using cout << setprecision(number), if we #include<iomanip>.  The default is 6 digits.
    
    // Truncation to the default 6 significant figures.
    float f3;
    f3=98.98034932492f;
    cout << f3<< " \t | \t ";
    f3=98.98034932492e2;
    cout << f3<< " \t | \t ";
    f3=98.98034932492e4;
    cout << f3<< endl<<endl<<endl;
    
    // Using a set precision
    cout<< setprecision(10);
    cout<< "Original number: 98.98034932492."<<endl<<endl;
    float f4;
    // double f4;
    // long double f4;
    f4=98.98034932492;
    cout << f4<< " \t | \t ";
    f4=98.98034932492e2;
    cout << f4<< " \t | \t ";
    f4=98.98034932492e4;
    cout << f4<< endl<<endl;
    cout << "Notice that these numbers are not precise to 10 digits!"<<endl<<endl;
    
    // The imprecision occurrs because of our float designation, which typically has storage for up to 7 significant digits. The overflow of significant digits becomes wasted!  We should use double (about 15 sig figs) or long double (33 sig figs) to get this to work better. See what happens when you comment-out the float and use the other float-types.
    
    // Rule: favor using a double rather than a float unless you really need to be conservative with storage space.
    
    // Important note from cpp.com: " Floating point numbers often have small rounding errors, even when the number has fewer significant digits than the precision. Many times these go unnoticed because they are so small, and because the numbers are truncated for output. Consequently, comparisons of floating point numbers may not give the expected results. Performing mathematical operations on these values will cause the rounding errors to grow larger."  See examples in lesson 2.5: .1 with precision of 17 gives .100000000001, and .1+.1 +... +.1 (ten times) with same precision gives .99999999998989.
    
    
    // NaN and Inf values:
    double zero = 0.0;
    double posinf = 5.0 / zero; // positive infinity
    std::cout << posinf << "\n";
    
    double neginf = -5.0 / zero; // negative infinity
    std::cout << neginf << "\n";
    
    double nan = zero / zero; // not a number (mathematically invalid)
    std::cout << nan << "\n";
    

    
    
    
    return 0;
    
}
