#include<stdio.h>
#include<string.h>
int main()
{
    char s[1030];
    int len;
    int tmp, now;
    while(scanf("%s",s)!=EOF)
    {
        len=strlen(s);
        while(len>2)
        {
            now=0;
            for(int i=0;i<len;i+=2)
            {
                tmp=s[i]+s[i+1];
                tmp%=26;
                tmp+=97;
                s[now]=tmp;
                now++;
            }
            s[now]='\0';
            len=strlen(s);
        }
        printf("%s\n",s);
    }
    return 0;
}
