#include<stdio.h>
int main()
{
    int n;
    int f[100010];
    f[1]=1;
    f[2]=2;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=3;i<=n;i++)
        {
            f[i]=f[i-1]+f[i-2];
            f[i]%=1000000007;
        }
        printf("%d\n",f[n]);
    }
    return 0;
}
