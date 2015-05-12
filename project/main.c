#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "math.h"


void summ()
{
    system("cls");
 int a;
 int b;
 printf("Please input first number:");
  scanf("%d",&a);
  printf("Please input second number:");
   scanf("%d",&b);
   printf("Summ result:%d \n",a+b);
   main();
}
void subtraction()
{
    system("cls");
   int a;
 int b;
 printf("Please input first number:");
  scanf("%d",&a);
   printf("Please input second number:");
   scanf("%d",&b);
   printf("subtraction result:%d \n",a-b);
   main();
}

void multiplication()
{
 system("cls");
 int a;
 int b;
 printf("Please input first number:");
 scanf("%d",&a);
 printf("Please input second number:");
 scanf("%d",&b);
 printf("multiplication result:%d \n",a*b);
 main();
}

void division()
{
    system("cls");
int a;
 int b;
 double c;
 printf("Please input first number:");
 scanf("%d",&a);
 printf("Please input second number:");
 scanf("%d",&b);
 if(b!=0)
 {
     c=a/b;
 printf("division result:%g \n",c);
 }
 else
 printf("division by zero is not allowed");
 main();
}

void factorial()
{
    system("cls");
    int a;
    printf("Input number:");
    scanf("%d",&a);
    int i=1;
    int p=1;
    for (i;i<=a;i++)
        p=p*i;
    printf("factorial:%d \n",p);
    main();
}

void sinx()
{
    system("cls");
    int a;
    printf("Input number in degrees:");
    scanf("%d",&a);
    printf("Sin:%f",sin( (a*M_PI) / 180));
}

void cosx()
{
    system("cls");
    int a;
    printf("Input number in degrees:");
    scanf("%d",&a);
    printf("Cos:%f",cos( (a*M_PI) / 180));
}

void tanx()
{
     system("cls");
    int a;
    printf("Input number in degrees:");
    scanf("%d",&a);
    printf("tan:%f",tan( (a*M_PI) / 180));
}

void atanx()
{
     system("cls");
    int a;
    printf("Input number in degrees:");
    scanf("%d",&a);
    printf("tan:%f",atan( (a*M_PI) / 180));
}

void NOD()
{
 system("cls");
int a;
 int b;
 printf("Please input first number:");
 scanf("%d",&a);
 printf("Please input second number:");
 scanf("%d",&b);
 while(a!=b)
 {
     if(a>b)
        a=a-b;
     if(b>a)
        b=b-a;
 }
  printf("NOD:%d",a);
}

void equation()
{
 system("cls");
 int a;
 int b;
 int c,d;
 double x1,x2;
 printf("Please input first number:");
 scanf("%d",&a);
 printf("Please input second number:");
 scanf("%d",&b);
 printf("Please input third number:");
 scanf("%d",&c);
 printf("%d",a);
 printf("x^2+%d",b);
 printf("x+%d",c);
 printf("=0 \n");
 d=(b*b)-4*a*c;
 if(d>0){
 x1=(-b+sqrt(d))/(2*a);
 x2=(-b-sqrt(d))/(2*a);
 printf("x1=%f",x1);
 printf("\n x2=%f",x2);
 }
 else if(d==0)
 {
   x1=(-b)/(2*a);
   printf("x1=%f",x1);
 }
 else
    printf("Root not found!");
}

int main()
{
    //system("cls");
    printf("Select punct's \n");
    printf("1. Summ \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("5. factorial \n");
    printf("6. Sin \n");
    printf("7. Cos \n");
    printf("8. Tan \n");
    printf("9. ATan \n");
    printf("10. NOD \n");
    printf("11. Square equation \n");
    int select;
    scanf("%d",&select);
    switch(select)
    {
    case 1:
        {
           summ();
           break;
        }
    case 2:
        {
         subtraction();
         break;
        }
    case 3:
        {
            multiplication();
            break;
        }
    case 4:
        {
            division();
            break;
        }
    case 5:
        {
            factorial();
            break;
        }
    case 6:
        {
            sinx();
            break;
        }
    case 7:
        {
            cosx();
            break;
        }
    case 8:
        {
            tanx();
            break;
        }
    case 9:
        {
            atanx();
            break;
        }
    case 10:
        {
            NOD();
            break;
        }
    case 11:
        {
           equation();
           break;
        }
    }


    return 0;
}
