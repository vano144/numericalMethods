//
//  functionNewton.h
//  methodSecant
//
//  Created by v144 on 15.11.15.
//  Copyright © 2015 v144. All rights reserved.
//
// for accurance I count all derivatives by hand, but with a little error it will be calculated with
// fucntion: (f1(x+eps,y,z)-f1(x,y,z))/eps;
#ifndef functionNewton_h
#define functionNewton_h
double calcFunc1(double x,double y,double z)
{
    return (-pow(x,2)+9.21*x*pow(z,3)+2*pow(y,2)-5.4289);
}
double calcFunc2(double x,double y,double z)
{
    return (-7.3*pow(x,2)*y+3.21*pow(x,2)*pow(z,2)-8.7*pow(y,2)-45.10873);
}
double calcFunc3(double x,double y,double z)
{
    return (3.5*pow(y,3)-1.3*pow(z,2)*pow(x,3)+44.27268);
}
//
double calcFunc1dx(double x,double y,double z)
{
    return (-2*x+9.21*pow(z,3));
}
double calcFunc1dy(double x,double y,double z)
{
    return 4*y;
}
double calcFunc1dz(double x,double y,double z)
{
    return (27.63*x*pow(z,2));
}
//
double calcFunc2dx(double x,double y,double z)
{
    return (-14.6*x*y+6.42*x*pow(z,2));
}
double calcFunc2dy(double x,double y,double z)
{
    return (-7.3*pow(x,2)-17.4*y);
}
double calcFunc2dz(double x,double y,double z)
{
    return (6.42*pow(x,2)*z);
}
//
double calcFunc3dx(double x,double y,double z)
{
    return (-3.9*pow(z,2)*pow(x,2));
}
double calcFunc3dy(double x,double y,double z)
{
    return 10.5*pow(y,2);
}
double calcFunc3dz(double x,double y,double z)
{
    return (-2.6*z*pow(x,3));
}

#endif /* functionNewton_h */
