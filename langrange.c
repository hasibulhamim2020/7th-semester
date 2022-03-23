#include<stdio.h>
int main()
{
   float x[20],y[20],p,xp,yp=0;
   int n,i,j;
   printf("enter a number = ");
   scanf("%d",& n);
   printf("enter x value= ");
   for(i=0;i<n;i++)
   {
       scanf("%f",&x[i]);
   }
   printf("enter y value = ");
   for(i=0;i<n;i++)
   {
       scanf("%f",&y[i]);
   }
   printf("enter evalute value= ");
   scanf("%f",& xp);
   for(i=0;i<n;i++)
   {
       p=1;
       for(j=0;j<n;j++)
       {
           if(i!=j)
           {
               p=p*(xp-x[j])/(x[i]-x[j]);
           }
       }
       yp=yp+p*y[i];
   }
   printf("result is = %f",yp);
   return 0;

}
