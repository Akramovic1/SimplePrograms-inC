#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int returning_value(int n,int k){
    int z=0;
    while(z<(k-1)){
        n=n/10;
        z++;
    }
    n=n%10;
    return n;
    }

int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int s=returning_value(n,k);
    printf("%d",s);
    return 0;
}
