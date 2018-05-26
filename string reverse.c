#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[100],c[100];
	int i=0,j=0,count=0;
	gets(s);
	while(s[i]!='\0')
	{
		count++;
		i++;
	}
	for(i=count;i>=0;i--)
	{
	   c[j]=s[i];
	   printf("%c",c[j]);
	   j++;
	  
	}
	return 0;
}
