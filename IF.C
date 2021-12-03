	    //find data type
 #include<stdio.h>
 #include<conio.h>

  int a;  //global variable
 void main()
 {
      int password;
      clrscr();

      printf("Enter password...!\n");
      scanf("%d",&password);

      if (password==2308)
      {
	     printf("Welcome\n");
      }
      printf("main function ended");
      getch();
}

