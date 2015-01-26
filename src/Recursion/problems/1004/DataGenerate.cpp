#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    freopen("in.in","w",stdout);
    srand(time(NULL));
    int i,j,k;
    for(i=1;i<=10000;i++)
    {
        printf("%d\n",rand()%99999*17%99999+1);
    }
    return 0;
}
