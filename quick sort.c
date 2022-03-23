#include<stdio.h>

void  quick_sort(int a[],int l,int r)
{
    int j;
    if(l<r)
    {
        j = partition(a,l,r);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,r);
    }
}
int partition(int a[],int l,int r)
{

    int v,i,j,temp,x;
    x=a[r];
    i=l-1;
    for(j=l;j<=r-1;j++)
    {

        if(a[j]<=x){

            i=i+1;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[i+1];
    a[i+1]=a[r];
    a[r]=temp;
    return i+1;

}
int main()
{

    int a[100],n,i;
    printf("enter a number for array size=");
    scanf("%d",&n);
    printf("enter  a array element = ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quick_sort(a,0,n-1);
    printf("\n after sorting = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
