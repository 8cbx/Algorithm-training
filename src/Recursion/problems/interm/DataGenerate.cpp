#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    freopen("in.in","w",stdout);
    srand(time(NULL));
    int i,j,k;
    int a[15];
    a[0]=1;
    for(i=1;i<=10;i++)
    {
        a[i]=a[i-1]*2;
    }
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=a[i];j++)
        {
            printf("%c",rand()%26+97);
        }
        printf("\n");
    }
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=a[i];j++)
        {
            printf("%c",rand()%26+97);
        }
        printf("\n");
    }
    return 0;
}
