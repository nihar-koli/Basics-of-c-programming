//Program to convert Decimal number to Binary number

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int num,rem,i=1,rev=0;
  clrscr();
   printf("\n\n Enter any num : ");
    scanf("%d",&num);

    while(num != 0)
    {
      rem=num%2;
      rev=(rem*i)+rev;
      num=num/2;
      i *= 10;
    }
       printf("\n\n binary equivalent is %d ",rev);

  getch();
}

