/*
Given N, Q, and Q queries, execute each query.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int in[2], lastAns=0, index, temp;

    for (int i=0; i<2; i++){
        scanf(" %d", &in[i]);
    }

    int queries[in[1]][3];

    for (int i=0; i<in[1]; i++){
        for (int j=0; j<3; j++){
            scanf(" %d", &queries[i][j]);
        }
    }

    int seqCnt[in[0]];
    for (int i=0; i<in[0]; i++){
        seqCnt[i] = 0;
    }

    int* seqList[in[0]];
    for (int i=0; i<in[0]; i++){
        seqList[i] = NULL;
    }

    for (int i=0; i<in[1]; i++){
        index = (queries[i][1]^lastAns)%in[0];
        if(queries[i][0]==1){
            if(!seqCnt[index]){
                seqList[index] = (int*) malloc(sizeof(int));
                seqList[index][0] = queries[i][2];
                seqCnt[index]++;
           }
            else if (seqCnt[index]!=0){
                seqList[index] = (int*) realloc(seqList[index], sizeof(int)*( seqCnt[index]+1));
                if(seqList[index]){
                    //printf("Number of bytes allocated is %d.\n", sizeof(int)*( seqCnt[index]+1));
                }
                else{
                    printf("Realloc not successful.\n");
                    return -1;
                }
                seqList[index][seqCnt[index]] = queries[i][2];
                seqCnt[index]++;
            }

        }
        else if (queries[i][0]==2) {
            temp = (queries[i][2]) % (seqCnt[index]);
            lastAns = seqList[index][temp];
            printf("%d\n", lastAns);
        }

    }
    return 0;
}
