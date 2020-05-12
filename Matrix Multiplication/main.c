#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int n,f,m,i,j,s;
    scanf("%d %d %d",&n,&f,&m);
    int a[n][f];
    int b[f][m];
    int c[n][m];
    for (i=0;i<n;i++){
        for(j=0;j<f;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<f;i++){
        for(j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            int sum=0;
            for(s=0;s<f;s++){
                sum+=a[i][s]*b[s][j];
            }
            c[i][j]=sum;
        }
    }
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
  return 0;

}
