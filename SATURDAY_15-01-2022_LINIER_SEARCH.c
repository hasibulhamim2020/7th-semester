#include<stdio.h>
int main(){

int k,loc=0,key,N;
int L[100];
printf("Enter the number of element=");
scanf ("%d",&N);
for(k=1;k<=N;k++)
    {
    printf("Enter %d the element", k);
    scanf("%d",&L[k]);

}

 printf("Enter the number of search = ");
    scanf("%d",&key);
    k=1;
while(k<=N){
    if(key==L[k])
    {
      loc=k;
      printf("Found the number %d at %d position",key,k);
break;

    }
    k++;
}
if (loc==0){
    printf("pai nai");
}
return 1;
}
