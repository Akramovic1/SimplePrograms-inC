#include <stdio.h>
#include <stdlib.h>

//reverse elements of subarray from a[left] to a[right]
void reverse(int a[], int left, int right) {
    int l = a[right];
    for (int i = right ; i > left ; i--){
        a[i]=a[i-1];
    }
    a[left]=l;
}

// shift the subarray a[left...right] to the right
//use reverse() as stated above
void shift(int a[], int left, int right, int k) {
    k %= (right-left+1);
    for (int i = 0 ; i < k ; i++){
        reverse(a,left,right);
    }
}

// reads a single query and process it by updateing a[]
void process_query(int a[]) {
   int left , right , k ;
    scanf("%d %d %d",&left,&right,&k);
    shift(a,left,right,k);
}

// scans array of size n
void scan_array(int a[], int n) {
   for (int i = 0 ; i < n ; i++){
       scanf("%d",&a[i]);
   }
}

// print array of size n
void print_array(int a[], int n) {
   for (int i = 0 ; i < n ; i++){
       printf("%d ",a[i]);
   }
}

// don't change any thing in the main
int main() {

   int n, q;
   scanf("%d", &n);
   int a[n];
   scan_array(a, n);

   scanf("%d", &q);
   for(int i = 0; i < q; i++) {
      process_query(a);
   }

   print_array(a, n);

   return 0;
}
