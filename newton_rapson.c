#include<stdio.h>
#include<math.h>
double func(double x)
{
    return (x*x*x +3);
}
double funcd(double x)
{
    return (3*x*x);
}
int main()
{
    double x0,h,e=0.01,root,x1;
    int a,max;
    printf("Enter the value of **A**.............\n");
    scanf("%lf",&x0);
    printf("Enter the maximum number of Iritations.....\n");
    scanf("%d",&a);
    max=1;
    while(max<=a)
    {
        h=func(x0)/funcd(x0);
        x1=x0-h;
        printf("The value after %d Iritations is %.4lf\n",max,x1);
        if(fabs(h)<e)
        {
            root=x1;
            break;
        }
        else
        x0=x1;
        max++;
    }
    if(root==x1)
    {
        printf("The root is: %.4lf\n",root);
        double fncvalue = func(root);
        printf("Value of F(root) is: %.4lf",fncvalue);
    }
    else
    printf("The unsufficent number of Iritations");
}
