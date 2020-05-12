#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{   int n,m,i,j;
scanf("%d %d",&i,&j);
int a[i][j];
for(n=0;n<i;n++){
    for(m=0;m<j;m++){
        scanf("%d",&a[n][m]);
    }
} int k=0,x=0;
int b[i];
for(n=0;n<i;n++){
    for(m=0;m<j;m++){
        x=a[n][m]+x;
    }
    b[k]=x;
    k++;
    x=0;
}
int test=0; int l,s;
for(n=0;n<i;n++){
    for(m=0;m<i;m++){
        if(b[n]>b[m]){
            test ++;
    }
    if(test == i-1){
        l=n;
        break;
    }
}
test =0;
}
for(m=0;m<j;m++){
    s=a[0][m];
    a[0][m]=a[l][m];
    a[l][m]=s;
}
for(n=0;n<i;n++){
    for(m=0;m<j;m++){
        printf("%d ",a[n][m]);
    }
    printf("\n");
}
return 0;
}
