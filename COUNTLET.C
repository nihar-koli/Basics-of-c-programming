//Program to count occurance of letter in a string
//Created by Nihar Anant Koli

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char str[50];
   int i,j,len,count;
      clrscr();
      printf("\n\n enter any string : ");
	 gets(str);
      len=strlen(str);
	for(i=0;i<len;i++)
	{
	  count=1;
	   for(j=i+1;j<len;j++)
	   {
	     if(str[i] == str[j])
	     {
	       count++;
	       str[j]=' ';
	     }

	   }
	   if(str[i] != ' ')
	      printf("\n\n %c = %d",str[i],count);


	}



   getch();
}
