#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[100],f[100];
	int i,n;
	gets(a);
	n=strlen(a);
	for(i=0;i<26;i++)
	{
	   f[i]=0;	
	}
	for(i=0;i<n;i++)
	{
	   if(a[i]>=97 && a[i]<=122)
	   {
	   	f[a[i]-97]++;
	   }
	   else if(a[i]>=65 && a[i]<=90)
	   {
	   	f[a[i]-65]++;
	   }
	}
	for(i=0;i<26;i++)
	{
		if(f[i]!=0)
		{
		    printf("the character %c occurs %d times\n",(i+97),f[i]);	
	            }
	}
	
	return 0;
}
