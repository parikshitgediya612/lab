#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,d;
    clrscr();
    printf("\nenter values\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);


    printf("the max is %d",a>b?a>c?a>d?a:d:c>d?c:d:b>c?d>d?b:d:c>d?c:d);

    getch();
}