#include <stdio.h>
#include <stdlib.h>
#define PI 3.141


int main()
{
    float radius, diameter, circumference, area;
    printf("Enter radius of circle: ");
    scanf("%f", & radius);
    diameter = (2*radius) ;
    circumference = (2* PI *radius);
    area = (PI * radius * radius);
    printf("Diameter of circle : %f\n", diameter);
    printf("Circumference of circle : %f\n", circumference);
    printf("Area of circle : %f\n", area);

    getch();

    return 0;
}
