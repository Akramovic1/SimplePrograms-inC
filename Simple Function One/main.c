#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long int computing_equation(int x){
long long int z=3*pow(x,5)+2*pow(x,4)-5*pow(x,3)-pow(x,2)+7*x-6;
return z;
}
int main() {
    int x;
    scanf("%d",&x);
    long long int y = computing_equation(x);
    printf("%lli",y);
    return 0;
}

