#include <stdio.h>
#include<string.h>
int main(void)
{
	char s[100],s1[100];
	int i,j;
	gets(s);
	gets(s1);
	for(i=0;s[i]!='\0';i++)
	{
	
	}
	j=0;
	while(s1[j]!=0)
	{
		s[i]=s1[j];
		i++;
		j++;
		
	}
	s[i]='\0';
	printf("%s",s);
	return 0;
}
