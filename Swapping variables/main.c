#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b;
	printf("please enter the 2 number that required to swap : ");
	scanf("%d %d", &a, &b);
    a = a ^ b ;
    b = a ^ b ;
    a = a ^ b ;
	printf("%d %d", a, b);
	return 0;
}
