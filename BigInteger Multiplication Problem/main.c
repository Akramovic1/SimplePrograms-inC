#include <stdio.h>
#include <stdlib.h>

// print array of size n
void print_array(int a[], int n) {
	int i ;
	for(i=0;i<n;i++){
        if(i==n-1 && a[i]==0)
            break;
        printf("%d",a[i]);
        if(a[0]==0)
            break ;
    }
	printf("\n");
}

// scans a single integer into array with size n
void scan_array(int a[], int n) {
	for(int i = 0; i < n; i++) {
		scanf("%1d", &a[i]);
	}
}

// the multiplication operation
// it is better to split the logic on several other functions
// then make multiply function call them.
void multiply(int a[], int n, int b[], int m, int r[], int t) {
    int i,j,temp;
    for(i=0;i<t;++i)
        r[i]=0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                r[i+j] += b[i]*a[j];}}
        for(i=0;i<t-1;i++)
        {
            temp=r[t-1-i]/10 ;
            r[t-1-i]=r[t-1-i]%10 ;
            r[t-2-i]=r[t-2-i]+temp ;
        }

}


// don't change any thing in the main
int main() {

	int n;
	scanf("%d",&n);
	int x[n];
	scan_array(x, n);

	int m;
	scanf("%d",&m);
	int y[m];
	scan_array(y, m);

	int t = n + m;
	int ans[t];

	multiply(x, n, y, m, ans, t);
	print_array(ans, t);

	return 0;
}
