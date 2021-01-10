#include<stdio.h>
#include<conio.h>




//AFTER BUILD AND RUN , PRESS ANY KEY YOU WANT.





void main()
{
char ch[]="Ami Dana Kata Pori.";
char c='A';
int i=0;
while(c)
{
c=getch();
printf("%c\a",ch[i]);
i++;
if(i==14)
{
printf(" "); i=0;
}
}
}
