#include<stdio.h>
int main()
{
    int f[101];
    int i;
    int n;
    scanf("%d", &n);
    f[0]=0;
    f[1]=1;
    for(i=2;i<=n;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    printf("%d\n", f[n]);
    return 0;
}
