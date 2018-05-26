#include<stdio.h>
#include<string.h>
int main(void)
{
  char a[100],s;
  int i=0,count=0;
  gets(a);
  printf("\n");
  scanf("%c",&s);
  while(a[i]!='\0')
  {
  	if(a[i]==s)
  	{
  		printf("%d",i);
  		count++;
  		break;
  	}
  	i++;
  }
  if(count==0)
  	{
  		printf("the character is not found");
  	}
}
