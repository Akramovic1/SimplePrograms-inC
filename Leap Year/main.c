#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int y;
    printf("please enter the required Year : ");
    scanf("%d",&y);
    if(y%4 == 0)
    {
        if( y%100 == 0)
        {
            if ( y%400 == 0)
                printf("Leap", y);
            else
                printf("Not Leap", y);
        }
        else
            printf("Leap", y );
    }
    else
        printf("Not Leap", y);

    return 0;
}
