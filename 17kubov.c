#include<stdlib.h>
#include <stdio.h>

int main ()
{
int b;
int i;
for(i=1; i<=34; i++)
{

if(i&2!=0)
{
b=i*i*i;
printf("%d \n",b);
}
}


  return 0;
}
