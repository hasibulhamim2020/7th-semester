#include<stdio.h>
int main()
{

    int a[20][20],n,i,j,k,f,s;
    printf("enter number of node =  ");
    scanf("%d",&n);
    printf("enter graph value =  \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter a[%d][%d]=   ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n grap matrix =  \n");
    for(i=0;i<n;i++)
    {
        printf("\t\t");
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        k=0;
        printf("\n connected neighbor is %d = ",i);
        for(j=0;j<n;j++)
        {
            if(a[i][j]==1&&i!=j){
                k++;
                printf("%d",j);
            }
        }
        printf("\n%d er neighbor %d node",i,k);
    }
    printf("\n");
    printf("enter first node=  ");
    scanf("%d",&f);
    printf("enter secound node=  ");
    scanf("%d",&s);
    if(a[f][s]==1)
    {
        printf("\n yes");
    }
    else{
        printf("\n no");
    }

}
