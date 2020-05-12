#include <stdio.h>
#include <stdlib.h>
#define MAX 20

void printintersection(int arr1[], int arr2[], int l1, int l2)
{
    int arr3[MAX];
    int i,j,k=0;
    for(i=0; i<l1; i++)
    {
        for(j=0; j<l2; j++)
        {
            if(arr1[i]==arr2[j])
            {
                arr3[k]=arr1[i];
                k++;
            }
        }
    }
    for(i=0;i<k-1;i++)
    {
        printf("%d, ",arr3[i]);
    }
    if(k!=0)
    {
        printf("%d", arr3[k-1]);
    }
}
void printunion(int arr1[], int arr2[], int l1, int l2)
{
    int arr3[40];
    int i, j, k=0, f;
     for (i = 0; i < l1; i++)
    {
        arr3[k] = arr1[i];
        k++;
    }
       for (i = 0; i < l2; i++)
    {
        f = 0;
        for (j = 0; j < l1; j++)
        {
            if (arr2[i] == arr1[j])
            {
                f = 1;
            }
        }

        if (f == 0)
        {
            arr3[k] = arr2[i];
            k++;
        }
    }
    for(i=0;i<k-1;i++)
    {
        printf("%d, ",arr3[i]);
    }
    printf("%d", arr3[k-1]);
}
int removerepetetion(int arr1[], int l)
{
    int i,j,k;

 for(i=0; i<l; i++)
    {
        for(j=i+1; j<l; j++)
        {
            if(arr1[i] == arr1[j])
            {
                for(k=j; k<l; k++)
                {
                    arr1[k] = arr1[k + 1];
                }
                l--;
                j--;
            }
        }
    }

    return(l);
}
int main()
{
    int arr1[MAX], arr2[MAX];
    int i,j,a,b,l1,l2;
    scanf("%d", &l1);
    for(i=0; i<l1; i++)
    {
        scanf("%d", &a);
        arr1[i]=a;
    }

    scanf("%d", &l2);
    for(j=0; j<l2; j++)
    {
        scanf("%d", &b);
        arr2[j]=b;
    }
    l1= removerepetetion(arr1,l1);
    l2= removerepetetion(arr2,l2);

    printf("Array1: ");
    for (i = 0; i < l1-1; i++)
    {
        printf("%d, ", arr1[i]);
    }
    printf("%d", arr1[l1-1]);
    printf("\nArray2: ");
    for (i = 0; i < l2-1; i++)
    {
        printf("%d, ", arr2[i]);
    }
    printf("%d",arr2[l2-1]);

     printf("\nUnion: ");
    printunion(arr1,arr2,l1,l2);
    printf("\nIntersection: ");
    printintersection(arr1,arr2,l1,l2);

    return 0;
}

