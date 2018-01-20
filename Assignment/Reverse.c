#include<stdio.h>
int main(void)
{
	int n;
	int rem,rev=0,temp=0;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("%d\n%d",temp,rev);
	return 0;
}
