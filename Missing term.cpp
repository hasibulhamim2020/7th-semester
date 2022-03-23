#include<bits/stdc++.h>
int fac(int a)
{
    if(a==0 || a==1)
        return 1;
    return a*fac(a-1);
}

int main()
{
    int x[10], y[10],n,i,j,r;
    float sum=0, fa=0,m;

    printf("Put -999 if the term is missing\n");

    printf("Number of elements: \n");
    scanf("%d",&n);

    printf("Input the values:\n");
    for(i=0;i<n;i++)
        scanf("%d",&y[i]);

    n--;
    j=0;
    for(r=n; r>=0; r--)
    {
        fa=fac(n)/(fac(r)*fac(n-r));
        fa*=pow((-1),j);
        j++;

        if(y[n-r]!=-999)
            sum=sum+(fa*y[n-r]);

        else
            m=fa;
    }
    printf("Total Sum= %f\n",sum);

    printf("The missing value is: %f\n\n", (-1)*(sum/m));
}









