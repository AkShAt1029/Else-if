#include<stdio.h>
main()
{
	int a;
	printf("Enter your Number: ");
	scanf("%d", &a);
	if(a>=0 && a<=39)
	{
		printf("Grade E");
	}
	else if(a>=40 && a<=54)
	{
		printf("Grade D");
	}
	else if(a>=55 && a<=69)
	{
		printf("Grade c");
	}
	else if(a>=70 && a<=84)
	{
		printf("Grade B");
	}
	else
	{
		printf("Grade A");
	}
	return 0;
}
