//>>>>>>>inputed value will be>>>>>>>....-1......2.....<<<<<<<<<<
#include<stdio.h>
using namespace std;
double func(double x)
    {
        return x*x*x - 3;
    }
double e=0.01 , c ;
double bisection(double a,double b)
{
    if(func(a) * func(b) >= 0)
    {
        printf("Incorrect a and b");
        return 0;
    }
    c = a;
    while ((b-a) >= e)
    {
        c = (((a*func(b))-(b*func(a)))/(func(b)-func(a)));
        if (func(c) == 0.0)
        {
            break;
        }
        else if (func(c)*func(a) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }
}
int main()
{
    double a,b;
    printf("Enter the value of 'a': ");
    scanf("%lf",&a);
    printf("Enter the value of 'b': ");
    scanf("%lf",&b);
    printf("\nThe function used is x^3-3   ");
    bisection(a,b);
    printf("\nAccurate Root calculated is = %.3lf\n",c);
    return 0;
}
