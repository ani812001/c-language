#include<stdio.h>
#include<conio.h>
void main()
{
	int marks;
	clrscr();
	printf("enter marks..!\n");
	scanf("%d",&marks);
	if (marks==100)
	{
		printf("ginius");
	}
	else if (marks>=80 && marks<100)
	{
		printf("topper");
	}
	else if (marks>=60 && marks<=79)
	{
		printf("First");
	}
	else
	{
		printf("Average Students");
	}
	getch();
}
