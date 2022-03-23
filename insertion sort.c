#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp;
    printf("enter a number  ");
    scanf("%d",&n);
    printf("enter array value \n");
    for(i=0;i<n;i++)
    {
        printf("enter a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i;
        while(j>0 && a[j-1]>temp)
        {
            a[j]=a[j-1];
            j-- ;
        }
        a[j]=temp;
    }
    printf("After sorting = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
