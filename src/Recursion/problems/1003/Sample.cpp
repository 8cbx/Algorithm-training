#include<stdio.h>
int main()
{
    int f[100010],n;
    f[1]=3;
    f[2]=9;
    for(int i=3;i<=100000;i++)
    {
        f[i]=3*f[i-1];
        f[i]%=10000007;
    }
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",f[n]-1);
    }
    return 0;
}
