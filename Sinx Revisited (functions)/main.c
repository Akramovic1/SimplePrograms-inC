#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846

double radian_angle(double x){
    double y=x*(M_PI/180);
    return y;
}
double factorial(int n){
    double c=1;
    while (n>1){
        c=n*c;
        n=n-1;
    }
    return c;
}
double power(double n,int m){
    double y;
    if (m==0){
        y=1;
    }
    else {
        y=1;
        while (m>0){
            y=n*y;
            m=m-1;
        }
    }
    return y;
}
int main() {
    double ans = 0;
    double x;
    int n,i;
    scanf("%lf %d",&x,&n);
    for (i=1;i<=n;i++){
        ans+= (power(radian_angle(x),i*2-1)/factorial(i*2-1))*power(-1,i+1); }
       printf("calculated %.10lf expected %.10lf\n", ans, sin(radian_angle(x)));
       return 0;
}
