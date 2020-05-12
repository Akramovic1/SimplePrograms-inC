#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,i,j,z;
    scanf("%d",&n1);
    int arr1[n1];
    for (i=0;i<n1;i++)
        scanf("%d",&arr1[i]);
    scanf("%d",&n2);
    int arr2[n2];
    for(j=0;j<n2;j++)
        scanf("%d",&arr2[j]);
    n3=n1+n2;
    int arr3[n3];
    i=0;j=0;z=0;
    if(n1==0 && n2==0){}
    else {
        while(1){
            if (arr1[i]<arr2[j]){
                arr3[z]=arr1[i];i++;z++;
            }
            else if (arr1[i]>arr2[j]){
                arr3[z]=arr2[j];j++;z++;}
            else if (arr1[i]==arr2[j]){
                arr3[z]=arr1[i];i++;z++;
                arr3[z]=arr2[j];j++;z++;}
            if (i==n1) {
                for(j=j;j<n2;j++){
                    arr3[z]=arr2[j];z++;}
                break;
            }
            else if (j==n2) {
                for(i=i;i<n1;i++){
                    arr3[z]=arr1[i];z++;}
                break;
                    }
        }

    for(i=0;i<z;i++){
        printf("%d ",arr3[i]);
    }}
 return 0;
}
