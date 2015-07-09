//
//  main.cpp
//  Chap2test4
//
//  Created by Philip Lombardo on 7/9/15.
//  Copyright (c) 2015 Philip Lombardo. All rights reserved.
//

// this file stores constants in a separate header file.

#include <iostream>
#include "constants.h"
#include "heightCalc.h"

int main(int argc, const char * argv[]) {
    
    using namespace std;
    using namespace myConstants;
    
    cout<< "Enter the initial height of the tower in meters: ";
    int tower_height;
    cin>>tower_height;
    
    printHeight(0,tower_height);
    printHeight(1,tower_height);
    printHeight(2,tower_height);
    printHeight(3,tower_height);
    printHeight(4,tower_height);
    printHeight(5,tower_height);
    
    return 0;
}
