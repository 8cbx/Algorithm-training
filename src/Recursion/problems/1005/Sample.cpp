#include<stdio.h>
#include<string.h>
int main()
{
    long long num[35][2];
    int n;
    num[0][0]=1;
    num[0][1]=0;
    for(int i=1;i<=33;i++)
    {
        num[i][0]=3*num[i-1][0]+2*num[i-1][1];
        num[i][1]=num[i-1][0]+num[i-1][1];
    }
    while(scanf("%d",&n)!=EOF)
    {
        printf("%lld, %lld\n",num[n][0],num[n][1]);
    }
    return 0;
}
