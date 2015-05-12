#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main ()
{

char f[]="mama\n";
char g[]="myla\n";
char x[]="ramy\n";
printf("%s%s%s\n",f,g,x);
printf("%s%s%s\n",x,g,f);
printf("%s%s%s\n",f,x,g);
printf("%s%s%s\n",g,x,f);
printf("%s%s%s\n",x,f,g);
printf("%s%s%s\n",x,g,x);


getch();


}
