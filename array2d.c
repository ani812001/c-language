 #include<stdio.h>
 int main()
 {
 	int a[2][2],i,j;
 	printf("Enter Array Elements");
 	
 	for(i=0;i<2;i++)//rows
 	{
 		for(j=0;j<2;j++)//columns
 		{
 			scanf("%d",&a[i][j]);
		 }
	}
 	printf("matrix elements");
 	
 	for(i=0;i<2;i++)//rows
 	{
 		for(j=0;j<2;j++)//columns
 		{
 			printf("%d ",a[i][j]);
		 }
		 printf("\n");
	 }
	 return 0;
}
