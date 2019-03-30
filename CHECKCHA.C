//Program to check character entered is alphabet or number or special character
//Created by Nihar Anant Koli

#include <stdio.h>
#include <conio.h>
void main()
{
  char ch;
  clrscr();
    printf("\n\n Enter any character : ");
      scanf("%c", &ch);

   if(ch>='A' && ch<='Z')
   {
      printf("\n\n Entered character %c is uppercase",ch);
   }
   else if(ch>='a' && ch<='z')
   {
      printf("\n\n Entered character %c is lowercase",ch);
   }
   else if(ch>='0' && ch<='9')
   {
      printf("\n\n Entered character %c is number",ch);
   }
   else
   {
      printf("\n\n Entered character is special character");
   }
   getch();
}
