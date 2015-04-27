#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int a,b;

    printf("Enter 1  a = ");
    scanf("%d",&a);
    printf("Enter 2  b = ");
    scanf("%d",&b);
    if (b != 0)
    {


        printf (("a + b = %d\n"
                 "a - b = %d\n"
                 "a * b = %d\n"
                 "a / b = %d\n"
                 "a%%b=%d\n"),
                a + b, a - b, a * b, a / b,a%b);



    }
    else
    {
        printf (("a + b = %d\n"
                 "a - b = %d\n"
                 "a * b = %d\n"),
                a + b, a - b, a * b);
    }

    return 0;
}
