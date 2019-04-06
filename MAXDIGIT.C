//Program to find max and min digit out of entered number
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem,min,max;
       clrscr();
       printf("\n\n Enter any number : ");
	 scanf("%d",&num);
       min=9;
       max=0;
	 while(num != 0)
	 {
	   rem=num%10;
	     if(rem<min)
	     {
		min=rem;
	     }
	     if(rem>max)
	     {
		max=rem;
	     }
	   num=num/10;
	 }
       printf("\n\n max number is : %d ",max);
       printf("\n\n min number is : %d ",min);



   getch();
}
