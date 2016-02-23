//
//  main.cpp
//  methodSecant
//
//  Created by v144 on 15.11.15.
//  Copyright © 2015 v144. All rights reserved.
//
#include <cmath>
#include "secantM.h"
#include "newtonSystemMethod.h"
#include "lagrange.h"
#include "simpleIter.hpp"
#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    //outputRootSecant(calcRootSecant(0.00001, 5, 15));
    //outputRootSys(calcRootNewton(1, 1, 0.0002, 0.0002));
    //outputPolynom(calcPolynomLagr(8));
    getRootSI(10, 0.00001);
    return 0;
}
