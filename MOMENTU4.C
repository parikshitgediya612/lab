#include<stdio.h>
#include<conio.h>
main()
{
     char c;
     clrscr();
     printf("enter the day");
     scanf("%c",c);
     switch(c)
     {
	 case 'a' :
		  printf("sunday");
		  break;
	 case 'b' :
		  printf("monday");
		  break;
	 case 'c' :
		  printf("tuesday");
		  break;
	 case 'd' :
		  printf("wednesday");
		  break;
	 case 'e':
		 printf("thursday");
		 break;
	 case 'f' :
		  printf("friday");
		  break;
	 case 'g' :
		  printf("saturday");
		  break;
	 default :
		 printf("\nplease enter valid day");
     }
     getch();
}