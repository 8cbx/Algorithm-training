#include<stdio.h>
int f(int n)
{
    if(n==0)
    {
        return 0;
    }
   return 2*f(n-1)+1;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",f(n));
    return 0;
}
