//
//  secantM.h
//  methodSecant
//
//  Created by v144 on 15.11.15.
//  Copyright © 2015 v144. All rights reserved.
//
#include "secantFunction.h"
#ifndef secantM_h
#define secantM_h
#include <iostream>
void outputRootSecant(const double &a)
{
    std::cout<<a<<std::endl;
}
double calcRootSecant(double eps,double x0,double x1)
{
    /*int i=1;
    double xn=x1,
           xnm1=x0,
           xnp1=xn-((xn-xnm1)*calcFunc(xnm1))/(calcFunc(xn)-calcFunc(xnm1));
    
    do
    {
        std::cout<<"точность "<<xn-xnm1<<std::endl;
        i++;
        xnm1=xn;
        xn=xnp1;
        xnp1=xn-((xn-xnm1)*calcFunc(xnm1))/(calcFunc(xn)-calcFunc(xnm1));
    }
    while (fabs(xnm1-xn)>eps);
    std::cout<<i<<std::endl;
    return xn;*/
    int j=1;
    double xn=x1,
    xnM=x0,
    xnP=xn-((xn-xnM)*calcFunc(xn))/(calcFunc(xn)-calcFunc(xnM));
    while (fabs(xnP-xn)>eps)
    {
        std::cout<<"accuracy "<<xnP-xn<<std::endl;
        j++;
        xnM=xn;
        xn=xnP;
        xnP=xn-((xn-xnM)*calcFunc(xn))/(calcFunc(xn)-calcFunc(xnM));
    }
    std::cout<<"accuracy "<<xnP-xn<<std::endl;
    std::cout<<"amount steps "<<j<<std::endl;
    return xnP;
}

#endif /* secantM_h */
