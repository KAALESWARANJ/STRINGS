#include <stdio.h>
#include<string.h>
int main(void)
{
	char s[100];
	int i;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=65 && s[i]<=90)
		{
		printf("%c",s[i]+32);
		}
		else if(s[i]>=97 && s[i]<=122)
		{
		printf("%c",s[i]-32);
		}
		else
		{
			printf("%c",s[i]);
		}
	
	}
return 0;
}
	
