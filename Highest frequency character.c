#include <stdio.h>
#include<string.h>
#define SIZE 256
int main(void)
{
	char s[100],res;
	int i=0,n;
	gets(s);
            n=strlen(s);
            int count[SIZE]={0};
            for(i=0;i<n;i++)
            {
                count[s[i]]++;	
            }
            int max=-1;
            for(i=0;i<n;i++)
            {
            	if(max<count[s[i]])
            	{
            		max=count[s[i]];
            		res=s[i];
            	}
            }
            printf("%c",res);
}
            	
