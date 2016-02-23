//
//  lagrange.h
//  methodSecant
//
//  Created by v144 on 16.11.15.
//  Copyright © 2015 v144. All rights reserved.
//

#ifndef lagrange_h
#define lagrange_h
#include <vector>
#include <iostream>
#include "initDateLagr.h"
std::vector<double> multiplication(std::vector<double> A,std::vector<double> B)
{
    std::vector<double> result(initDate().size());
    for (int i=0;i<A.size();i++)
    {
        for (int j=0;j<B.size();j++)
        {
            result[i+j]=result[i+j]+A[i]*B[j];
            
        }
    }
    return result;
}
void outputPolynom(const std::vector<double> &result)
{
    for (int i=0;i<result.size();i++)
    {
        if (i==result.size()-1)
        {
            std::cout<<"("<<result[i]<<"*x^"<<i<<")=F(x)";
            continue;
        }
        std::cout<<"("<<result[i]<<"*x^"<<i<<")+";
    }
    std::cout<<std::endl;
}

std::vector<double> calcPolynomLagr(int n)
{
    std::vector<Point> initData=initDate();
    std::vector<double> result(initData.size());
    double k=initData[n-1].x-initData[0].x;
    std::vector<double> B(2);
    B[1]=1;
    result[1]=1;
    result[0]=-initData[0].x;
    for (int i=1;i<initData.size();i++)
    {
        if (i==(n-1)) continue;
        B[0]=-initData[i].x;
        result=multiplication(result, B);
        k*=initData[i].x-initData[0].x;
    }
    k=k*initData[n-1].y;
    for (int j=0;j<result.size();j++)
        result[j]=result[j]/k;
    return result;
}

#endif /* lagrange_h */
