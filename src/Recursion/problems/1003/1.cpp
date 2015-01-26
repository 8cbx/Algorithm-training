#include<stdio.h>
#include<math.h>
int main()
{
    int f[100010];
    int n,i,m,p;
    f[1]=2;
    p=2;
   for(i=2;i<=100001;++i)
    {
       m=p+2*pow(3,i-1);
       p=m%10000007;
       f[i]=m%10000007;
    }
    while (scanf("%d",&n)!=EOF)
{
     printf("%d\n",f[n]) ;
}
    return 0;
}
