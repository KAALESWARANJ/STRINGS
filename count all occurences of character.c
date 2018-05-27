#include <stdio.h>
#include<string.h>
int main(void)
{
	char s[100],s1;
	int count=0,i=0;
	scanf("%c\n",&s1);
	gets(s);
	while(s[i]!='\0')
	{
	   if(s[i]==s1)
	   {
	   	count++;
	   }
	   i++;
	}
	printf("The character %c occurs %d times",s1,count);
	
	return 0;
}
