#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_apples , dozens , rest_apples;

    printf("Akramovic welcomes you \n \n..... please enter numers of apples :  ");
    scanf("%d",&num_apples);
    dozens = num_apples / 12;
    rest_apples = num_apples % 12;
    printf("%d dozens %d apples " ,dozens,rest_apples);
    getchar();

    return 0;
}
