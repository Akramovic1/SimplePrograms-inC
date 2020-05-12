#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, i, flag = 0;
    scanf("%d", &n);
    for(i = 2; i <= n/2; ++i)
    {
    if(n%i == 0)
        {
    flag = 1;
    break;
        }
    }
    if (n == 1)
    {
     printf("1 is not prime");
    }
    else
    {
    if (flag == 0)
       printf("%d is prime", n);
       else
         printf("%d is not prime", n);
    }

    return 0;
}
