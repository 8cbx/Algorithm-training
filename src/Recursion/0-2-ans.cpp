#include<stdio.h>
int f(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==0)
    {
        return 0;
    }
   return f(n-1)+f(n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",f(n));
    return 0;
}
