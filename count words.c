#include <stdio.h>
#include<string.h>
int main(void)
{
	char str[100];
	int i,count=1;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
	   if(str[i]==32)
	   {
	      count++;	
	   }
            }


    printf("Total number of words = %d",count);
    return 0;
}
