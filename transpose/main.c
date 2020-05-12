#include <stdio.h>
int main (){
int a[1005][1005];
int n,m,i,j;
scanf("%d %d",&n,&m);
if(1<=n && 1<=m && n<=1000 && m<=1000){
    int tran[m][n];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&tran[j][i]);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",tran[i][j]);}
    printf("\n");
}
}
return 0;

}
