#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846
double fact(double a) {
 double factorial =1;
    while (a>1) {
        factorial=a*factorial;
        a--;
    }
return factorial;
}
int main() {
	double n,p,r,x,y,siny;
	scanf("%lf %lf", &x, &n);
	y= (x * M_PI) / 180;
    r = 0;
    if ((x>=0&&x<=360) && (n>=0&&n<=9)) {
        for(p=1;p<=2*n-1;p+=2) {
            siny+=pow(-1,r)*pow(y,p)/fact(p);
        r+=1;
    }
	printf("calculated %.10lf expected %.10lf\n", siny, sin(y));
    }
	return 0;
}
