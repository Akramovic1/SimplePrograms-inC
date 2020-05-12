#include <stdio.h>
#include <stdlib.h>

int main()
{   float marks1, marks2, marks3, average;
    printf("Enter marks obtained in subject 1 :");
    scanf("%f", &marks1);
    printf("Enter marks obtained in subject 2 :");
    scanf("%f", &marks2);
    printf("Enter marks obtained in subject 3 :");
    scanf("%f", &marks3);
    average = (marks1 + marks2 + marks3) / 3;
    printf("Average : %0.2f\n", average);
    getchar();


    return 0;
}
