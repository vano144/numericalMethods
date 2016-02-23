//
//  newtonSystemMethod.h
//  methodSecant
//
//  Created by v144 on 15.11.15.
//  Copyright © 2015 v144. All rights reserved.
//


#ifndef newtonSystemMethod_h
#define newtonSystemMethod_h
#include "functionNewton.h"
#include <vector>
#include <iostream>
void outputRootSys(const std::vector<double> &result)
{
    for (int j=0;j<result.size();j++)
        std::cout<<result[j]<<std::endl;
}
double det3(double matrix[3][3])
{
    return (matrix[0][0]*(matrix[1][1]*matrix[2][2]-matrix[2][1]*matrix[1][2])-matrix[0][1]*(matrix[1][0]*matrix[2][2]-matrix[2][0]*matrix[1][2])+matrix[0][2]*(matrix[1][0]*matrix[2][1]-matrix[2][0]*matrix[1][1]));
}
double detNewRow(int n,double matrix[3][3],double a,double b,double c)
{
    double curMatr[3][3];
    for (int i=0;i<3;i++)
    {
         for (int j=0;j<3;j++)
             curMatr[i][j]=matrix[i][j];
    }
    curMatr[0][n]=a;
    curMatr[1][n]=b;
    curMatr[2][n]=c;
    return det3(curMatr);
}
std::vector<double> calcRootNewton(double x0,double y0,double z0,double eps)
{
    double detMain=0,
           detX=0,
           detY=0,
           detZ=0,
           f1=0,
           f2=0,
           f3=0,
           deltaX=0,
           deltaY=0,
           deltaZ=0;
    double matrix[3][3];
    long int i=0;
    do
    {   x0=x0+deltaX;
        y0=y0+deltaY;
        z0=z0+deltaZ;
        matrix[0][0]=calcFunc1dx(x0,y0,z0);
        matrix[0][1]=calcFunc1dy(x0,y0,z0);
        matrix[0][2]=calcFunc1dz(x0,y0,z0);
        matrix[1][0]=calcFunc2dx(x0,y0,z0);
        matrix[1][1]=calcFunc2dy(x0,y0,z0);
        matrix[1][2]=calcFunc2dz(x0,y0,z0);
        matrix[2][0]=calcFunc3dx(x0,y0,z0);
        matrix[2][1]=calcFunc3dy(x0,y0,z0);
        matrix[2][2]=calcFunc3dz(x0,y0,z0);
        f1=-calcFunc1(x0, y0, z0);
        f2=-calcFunc2(x0, y0, z0);
        f3=-calcFunc3(x0, y0, z0);
        detMain=det3(matrix);
        if (detMain==0)
        {
            std::vector<double> result;
            result.insert(result.end(),x0);
            result.insert(result.end(),y0);
            result.insert(result.end(),z0);
            return result;
        }
        detX=detNewRow(0, matrix, f1,f2,f3);
        detY=detNewRow(1, matrix, f1,f2,f3);
        detZ=detNewRow(2, matrix, f1,f2,f3);
        deltaX=detX/detMain;
        deltaY=detY/detMain;
        deltaZ=detZ/detMain;
        i++;
        
    }
    while((fabs(deltaX)>eps)||(fabs(deltaY)>eps)||(fabs(deltaZ)>eps));
    std::cout<<deltaX<<std::endl;
    std::cout<<deltaY<<std::endl;
    std::cout<<deltaZ<<std::endl;
    std::vector<double> result;
    result.insert(result.end(),x0);
    result.insert(result.end(),y0);
    result.insert(result.end(),z0);
    return result;
}
#endif /* newtonSystemMethod_h */
