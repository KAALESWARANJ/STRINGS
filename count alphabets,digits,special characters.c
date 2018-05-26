#include <stdio.h>
#include<string.h>
int main(void)
{
	char s[100];
	int i,count=0,count1=0,count2=0;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=48 && s[i]<=57)
		{
		count++;
		}
		 else if(s[i]>=97 && s[i]<=122 || s[i]>=65 && s[i]<=90)
		{
	            count1++;
		}
		else
		{
	            count2++;
		}
	
	}
	printf("no of digits is %d\n",count);
	printf("no of alphabets is %d\n",count1);
	printf("no of special characters is %d",count2);
return 0;
}
	
