#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("a is lowest");
			}	
			else
			{
				printf("c is lowest");
				
			}
	}
	else
	{
		if(b<c)
		{
			printf("b is lowest");
		}
		else
		{
			printf("c is lowest");
			
		}
	}
	

}
