 #include<stdio.h>
 int main()
 {
     int  k,loc=0,key,n,mid;
     int l[100];
     printf("enter arry size = ");
     scanf("%d",&n);
     for(k=1;k<=n;k++)
     {
         printf("enter %d th element =  ",k);
         scanf("%d",&l[k]);
     }
        printf("enter search element =   ");
     scanf("%d",&key);
     k=1;
     int  beg=1,end=n;
     while(beg<=end)
        {
             mid=(beg+end+1)/2;
     if(l[mid]==key){
         printf("found in %d th position.",mid);
         return 0;
     }
     else if(l[mid]<key)
        {
    beg=mid+1;
     }
     else{
         end=mid-1;
     }}
     printf("not found");

 }
