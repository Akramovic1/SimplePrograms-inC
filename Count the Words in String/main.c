#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[300];
    fgets(str,300,stdin);
    int l=strlen(str)-1;

    int counter ;
    if (str[0]==' '|| str[0]=='\t') counter = 0 ;
    else counter = 1 ;

    for (int i = 0 ; i < l-1 ; i++){

        if ((str[i]==' ' || str[i]=='\t') && (str[i+1]!=' ' && str[i+1] != '\t')){
            counter++;
        }

        else continue;
    }


    printf("%d words",counter);

    return 0;
}
