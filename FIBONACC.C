//Program to print Fibonacci series
//created by Nihar Anant Koli

#include<stdio.h>
#include<conio.h>
void main()
{
  int a=0,b=1,c,n,i=3;
  clrscr();

   printf("\n\n Enter number of digits of fibonacci series you want : ");
     scanf("%d",&n);
   if(n>=1)
   printf("%d ",a);
   if(n>=2)
   printf("%d",b);

   while(i<=n)
   {
     c=a+b;
     printf(" %d ",c);
     a=b;
     b=c;
     i++;
   }

  getch();
}

