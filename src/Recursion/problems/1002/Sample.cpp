#include<stdio.h>
int main()
{
    int f[100010],n;
    f[1]=1;
    f[2]=2;
    for(int i=3;i<=100000;i++)
    {
        f[i]=f[i-1]+f[i-2];
        f[i]%=1000000007;
    }
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",f[n]);
    }
    return 0;
}
