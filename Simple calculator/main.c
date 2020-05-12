#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b ;
    char op ;
    printf("please enter the first number : ");
    scanf("%d",&a);
    printf("please enter the operator (+,-,*,/,%) : ");
    scanf(" %c",&op);
    printf("please enter the Second number : ");
    scanf("%d",&b);

            switch (op) {
                case '+':
                    printf("%d + %d = %d",a,b,a+b);break;
                case '-':
                    printf("%d - %d = %d",a,b,a-b);break;
                case '*':
                    printf("%d * %d = %d",a,b,a*b);break;
                case '/' :
                    if (b!=0){
                         printf("%d / %d = %d",a,b,(int)a/(int)b);break;
                    }
                    else {
                         printf("ERROR: Division by zero is not allowed!");break;
                case '%' :
                    if (b!=0){
                         printf("%d %% %d = %d",a,b,(int)a%(int)b);break;
                    }
                    else {
                         printf("ERROR: Division by zero is not allowed!");break;

                    }
                default :
                        printf("ERROR: Unsupported Operator!");
                    }
            }

    return 0;
}
