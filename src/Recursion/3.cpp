#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,j,n,c,z;
    int a[1000];
    while(cin >> n)
    {
        for(i=1; i<=n; i++)
        {
            a[i]=1;
        }
        c=n;
        z=0;
        while(c!=0)
        {
            for(i=1; i<=n; i++)
            {
                if(a[i]==1&&z==0)
                {
                    z++;
                }
                else if(a[i]==1&&z==1)
                {
                    a[i]=0;
                    z=0;
                    c--;
                    cout << i << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
