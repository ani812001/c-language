 
#include<stdio.h>


int powerNonRecursive(int a, int b);
int powerRecursion(int a, int b);


int main()
{
    int a, b;
    printf("Enter base number: ");
	scanf("%d",&a);


    printf("Enter power number(positive integer): ");
    scanf("%d",&b);
	printf("Non-recursive: %d^%d = %d\n\n",a,b, powerNonRecursive(a, b));


	getchar();



    return 0;
}


int powerNonRecursive(int a, int b)
{
	int i=0;
	int result=1;
    for (i = 1; i <=b; i++) 
    {
       result=result*a;
    }
	return result;
}
