#include<stdio.h>
int main()
{
int G[50][50], i, j, n,count;
printf("enter the number of nodes\n");
scanf("%d",&n);
    for (i=0;i<n;i++)
        {
           for (j=0;j<n;j++)
            {
               scanf("%d",&G[i][j]);
            }
        }
    printf("graph dekhun..... \n");
    for (i=0;i<n;i++)
        {
           for (j=0;j<n;j++)
            {
               printf("%d",G[i][j]);
            }
            printf("\n");
        }
for (i=0;i<n;i++)
        {
            count=0;
           for (j=0;j<n;j++)
            {
               if(G[i][j]==1)
                   {
                       count = count+1;
                       printf("row %d connected with colum %d\n", i, j);
                   }
                   else{
                    count = count;
                   }

            }
            printf("for %d each node have %d\n", i , count);
        }


return 1;
}
