#include <stdio.h>
#include<string.h>
int main(void)
{
	char s[100],s1[100];
	int count=0,i;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
	     s1[i]=s[i];
	}
	s1[i]='\0';
	printf("%s",s1);
	return 0;
}
