#include<stdio.h>
#include<conio.h>
void main()
{
  int num,rem,rev=0,a;
  clrscr();
   printf("\n\n Enter any num : ");
    scanf("%d",&num);
   a=num;
   while(num>0)
   {
     rem=num%10;
     rev=(rev*10)+rem;
     num=num/10;
   }
   printf("\n\n Reverse : %d",rev);

   if(rev==a)
   {
     printf("\n\n Number enter is palindrome");
   }
   else
   {
     printf("\n\n Number enter is not palindrome");

   }
  getch();
}

