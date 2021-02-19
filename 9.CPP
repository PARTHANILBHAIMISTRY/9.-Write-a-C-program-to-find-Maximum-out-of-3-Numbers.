#include<stdio.h>//write a program to find maximum out of 3 numbers.
#include<conio.h>
void main()
{
	int a;
	int b;
	int c;
	clrscr();
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter c:");
	scanf("%d",&c);
	if (a>b)
	{
		if (a>c)
		{
			printf("a is max.");
		}
		else
			printf("c is max.");
	}
	else if (b>c)
	printf("b is max.");
	else
	printf("c is max.");
	getch();
}