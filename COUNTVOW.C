#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char str[50];
   int i,len,count=0;
      clrscr();
     printf("\n\n Enter any string : ");
       gets(str);

     len=strlen(str);
	for(i=0;i<len;i++)
	{
	   tolower(str);
	   switch(str[i])
	   {
	      case 'a':
	      case 'e':
	      case 'i':
	      case 'o':
	      case 'u':
		count++;
	   }
	}
	printf("\n\n number of vowels are : %d ",count);

   getch();
}