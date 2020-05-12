#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Akramovic welcomes you \n \nplease enter the value of resistance : R1 , R2 , R3  \n ");
    double r1 , r2 , r3 , s , p;
    scanf("%lf",&r1);
    scanf("%lf",&r2);
    scanf("%lf",&r3);
    s = r1 + r2 + r3 ;
    p = 1/((1/r1)+(1/r2)+(1/r3));
    printf("the value of the equivalent resistance in series connection = %lf \n" ,s);
    printf("the value of the equivalent resistance in parallel connection = %0.5lf ",p);
    getchar();

    return 0;
}
