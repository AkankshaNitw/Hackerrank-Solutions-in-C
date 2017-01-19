/*
There are N strings. Each string's length is no more than 20 characters. There are also Q queries. For each query, you are given a string, and you need to find out how many times this string occurred previously.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int noStrings, noQueries;

    scanf("%d", &noStrings);
    //printf("%d\n", noStrings);

    char stringArr[noStrings][20];
    for (int i = 0; i<noStrings; i++)
        scanf("%s", stringArr[i]);
    /*for (int i = 0; i<noStrings; i++)
        printf("%s\n", stringArr[i]);*/

    scanf("%d", &noQueries);
    //printf("%d\n", noQueries);

    char queriesArr[noQueries][20];
    for (int i = 0; i<noQueries; i++)
        scanf("%s", queriesArr[i]);
    /*for (int i = 0; i<noQueries; i++)
        printf("%s\n", queriesArr[i]);*/

    int countArr[noQueries];
    //memset(countArr, 0, noQueries);
    for (int i =0; i<noQueries; i++)
        countArr[i] = 0;

    for (int i = 0; i<noQueries; i++)
    {
        //cnt = 0;
        for (int j = 0; j<noStrings; j++)
        {
            if(strcmp(queriesArr[i], stringArr[j])==0)
                countArr[i]++;
        }
     }

     for (int i =0; i<noQueries; i++)
        printf("%d\n", countArr[i]);

    return 0;
}
