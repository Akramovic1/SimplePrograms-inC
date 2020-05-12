#include <stdio.h>
#include <stdlib.h>

int main() {


    int x, y;
    printf("please enter x,y : ");
    scanf("%d %d", &x, &y);
    char z;
    if ((x>=0 && x<=15)&&(y>=0 && y<=15)) {
            z = (x<<4) | y;
    printf("%d", z);
    }
    else {
        printf("Error");
    }
    return 0;
}
