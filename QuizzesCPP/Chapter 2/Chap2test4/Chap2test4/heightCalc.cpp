//
//  heightCalc.cpp
//  Chap2test4
//
//  Created by Philip Lombardo on 7/9/15.
//  Copyright (c) 2015 Philip Lombardo. All rights reserved.
//

#include "heightCalc.h"
#include "constants.h"
#include <iostream>

double heightCalc(int x_seconds, double tower_height)
{
    using namespace myConstants;
    double distance_fallen(gravity_constant*x_seconds*x_seconds/2);
    double current_height(tower_height - distance_fallen);
    if (current_height>=0)
        return current_height;
    else
        return 0;
}

void printHeight(int x_seconds, double tower_height)
{
    std::cout<<"At "<< x_seconds<<", the ball is at height: "<< heightCalc(x_seconds,tower_height)<< " meters.\n";
}