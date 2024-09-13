#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,count=0;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;n>0;i++)
	{
		n=n/10;
		count++;
		
	}
	printf("%d\n",count);
	return 0;
}
