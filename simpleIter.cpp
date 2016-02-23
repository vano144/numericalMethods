//
//  simpleIter.cpp
//  methodSecant
//
//  Created by v144 on 30.11.15.
//  Copyright © 2015 v144. All rights reserved.
//
//Method of simple iteration
#include "simpleIter.hpp"
#include <math.h>
#include <iostream>
double getValueOfFunction(double x)
{
    return 1.78*pow(x,5)+3.2*pow(x,4)-5*pow(x,3)-9.7*pow(x,2)+x-21;
}

double getValueOfDFunction(double x)
{
    return (getValueOfFunction(x+0.0001)-getValueOfFunction(x))/0.0001;
}

double getRootSI(double x0,double eps)
{
    double xn=x0,
            xn1=x0,
    lambda=1/getValueOfDFunction(x0);
    do
    {
        xn=xn1;
        xn1=xn-lambda*getValueOfFunction(xn);
    }
    while (fabs(xn1-xn)>eps);
    std::cout<<xn1;
    return xn1;
}


