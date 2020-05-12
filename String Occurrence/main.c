#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int countOccurrences(char * str, char * toSearch)
{
    int i, j, found, count;
    int stringLen, searchLen;

    stringLen = strlen(str);      // length of string
    searchLen = strlen(toSearch); // length of word to be searched

    count = 0;

    for(i=0; i <= stringLen-searchLen; i++)
    {
        /* Match word with string */
        found = 1;
        for(j=0; j<searchLen; j++)
        {
            if(str[i + j] != toSearch[j])
            {
                found = 0;
                break;
            }
        }

        if(found == 1)
        {
            printf("Occurrence at index %d\n",i);
            count++;
        }
    }

    return count;
}



int main (){
     char str[300];
    char toSearch[300];
    int count;

    /* Input string and word from user */
    gets(str);
    gets(toSearch);

    count = countOccurrences(str, toSearch);

    printf("Total number of occurrences = %d", count);

    return 0;
}
