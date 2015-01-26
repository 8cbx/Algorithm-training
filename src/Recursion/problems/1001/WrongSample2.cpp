#include<stdio.h>
int f(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==2)
    {
        return 2;
    }
    else return (f(n-1)+f(n-2))%1000000007;
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",f(n));
    }
    return 0;
}
