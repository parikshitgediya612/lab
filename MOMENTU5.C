#include<stdio.h>
#include<conio.h>
main()
{
    int unit;
    float bill,totalbill,surcharge;
    printf("enter unit=");
    scanf("%d",&unit);


    if(unit<=50)
    {
	bill= (unit*0.50);
    }
    else if(unit<=150)
    {
	bill= (unit=50)*0.75+25;
    }
    else if(unit<=250)
    {
	bill= (unit=150)*1.20+100;
    }
    else
    {
	bill= (unit=250)*1.50+300;
    }
    surcharge=bill*0.20;
    totalbill= bill+surcharge;
    printf(" eletricity bill i=%.2f",totalbill);
    getch();
}=