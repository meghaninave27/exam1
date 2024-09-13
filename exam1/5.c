#include<stdio.h>
#include<conio.h>
int main()
{
	char alphabets;
	printf("enter alphabets:");
	scanf("%c",&alphabets);
	switch(alphabets)
	{
		case'a':printf("%c is vowel",alphabets );
		break;
		case'i':printf("%c is vowel",alphabets);
		break;
		case'e':printf("%c is vowel",alphabets);
		break;
			case'o':printf("%c is vowel",alphabets);
		break;
		case'u':printf("%c is vowel",alphabets);
		break;
		default:printf("%c is constant");
		
		
	}
}
