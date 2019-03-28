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
   printf("\n\n %d is an armstrong number",a);
   else
   printf("\n\n %d is not an armstrong number",a);

  getch();
}

