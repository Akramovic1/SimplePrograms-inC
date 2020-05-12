#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,k,i;
    int x[100000],y[100000];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&x[i]);
    }
    if (n>=k) {
        for(i=0;i<k;i++) {
            y[i]=x[n-k+i];
        }
        int d=0;
        for (i=k;i<n;i++){
            y[i]=x[d];
            d++;
        }
    }
    else {
        for (i=0;i<(k-n);i++){
            y[i]=x[(2*n-k+i)];
        }
        for (i=(k-n);i<n;i++) {
            y[i]=x[(n-k+i)];
        }
    }
    for(i=0;i<n;i++) {
        printf("%d ",y[i]);
    }
    return 0;
}
