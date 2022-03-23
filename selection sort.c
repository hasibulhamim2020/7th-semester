#include <stdio.h>
int main()
{
    int list[100], n, i, j, swap,min;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
     {
         printf("enter %d th element =  ",i);
         scanf("%d", &list[i]);
     }
    for(i = 1; i <=n; i++)
    {
        min=i;
        for(j = i + 1; j <= n; j++)
        {
            if(list[i] > list[j])
            {
                min=j;
            }

        }
        if (min != i)
        {
            swap=list[i];
            list[i]=list[min];
            list[min] =swap;
        }
    }
    printf("Sorted elements:");
    for(i = 1; i <=n; i++)
    printf("%d,", list[i]);
    return 0;
}
