#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x,y,z;
    printf("please enter x,y (x+2^y): ");
    scanf("%d",&x);
    scanf("%d",&y);
    z=x << y;

    if((x>=-1000 && x<=1000)&&(y>=0)&&(y<=11)) {
    printf("%d",z);
    }
    else {
        printf("Error");
    }
    return 0;
}
