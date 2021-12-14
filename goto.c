 #include<stdio.h>
 
 int main()
 {
 	int i;
 	label:
 		printf("%d",i);
 		++i;
 	if(i<=10)
 	goto label;
 	
	return 0;
 }
