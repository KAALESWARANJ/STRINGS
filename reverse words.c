#include<stdio.h>
#include<string.h>
int main(void)
{
  char a[100];
  int i=0,n;
  gets(a);
  n=strlen(a);
 
   for(i=n-1;i>=0;i--)
  {
      if(a[i]==' ')
      {    
           a[i]='\0';
           printf("%s",&(a[i])+1);
           printf(" ");
      }
  }
  printf("%s",a);
}

  
  
	
