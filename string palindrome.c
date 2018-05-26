#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[100];
	int i=0,count=0;
	gets(s);
	while(s[i]!='\0')
	{
		count++;
		i++;
	}
            int initial=0;
            int end=count-1;
            while(initial<=end)
            {
            	if(s[initial]!=s[end])
            	break;
            	
            	initial++;
            	end--;
            }
            if(initial>=end)
            {
            	printf("palindrome");
            }
            else
            {
            	printf("not");
            }
}
            
		
	
