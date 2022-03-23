#include<bits/stdc++.h>

using namespace std;

int fac(int n)
{
    if(n==1)
        return 1;
    return n*fac(n-1);
}

int main()
{
    cout<<"Calculate the value of nCr;\n\n Please input 'n' and 'r':";

    int n,r, nCr;
    scanf("%d %d",&n,&r);
    nCr=(fac(n))/((fac(r))*(fac((n-r))));
    printf("nCr:= %d \n", nCr);
}
