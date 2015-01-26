#include<stdio.h>
int main()
{
    int f[101];
    int i;
    int n;
    scanf("%d", &n);
    f[0]=0;
    for(i=1;i<=n;i++)
    {
        f[i]=2*f[i-1]+1;
    }
    printf("%d\n", f[n]);
    return 0;
}
