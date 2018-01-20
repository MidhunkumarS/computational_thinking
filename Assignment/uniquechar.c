#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[100];
	int i,l,j,flag;
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(s[i]==s[j])
			{
				flag=0;
			}
			else
			{
				flag=1;
			}
		}
	}
	if(flag==1)
	{
		printf("The string has all unique characters");
	}
	else
	{
		printf("The string is not having the unique characters");
	}
	return 0;
}
