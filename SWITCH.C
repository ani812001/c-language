#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	int ch;
	clrscr();
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);

	printf("Enter choice");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:c=a+b;
			printf("%d",c);
		break;
		case 2: c =a-b;
			printf("%d",c);
		break;
		case 3: c=a*b;
			printf("%d",c);
		break;
		case 4: c = a/b;
			printf("%d",c);
		break;
		deafult: printf("invalid choice");

	}
	getch();
}