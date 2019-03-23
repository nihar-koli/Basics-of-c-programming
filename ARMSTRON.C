// Program to check whether the entered number is armstrong number or not
// Created by Nihar Anant Koli

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int num,rem,sum=0,a;
  clrscr();
   printf("\n\n Enter any num : ");
    scanf("%d",&num);
    a=num;


   while(num>0)
   {
     rem=num%10;
     sum=sum+pow(rem,3);
     num=num/10;
   }
   if(sum==a)
   printf("\n\n It is an armstrong number");
   else
   printf("\n\n It is not an armstrong number");

  getch();
}

