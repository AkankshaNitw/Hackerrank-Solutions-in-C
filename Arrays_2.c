/*
Calculate the hourglass sum for every hourglass in A, then print the maximum hourglass sum.
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int arr[6][6];
    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){
          scanf("%d",&arr[arr_i][arr_j]);
       }
    }

    int hourglass[4][4];
    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
           hourglass[i][j] = 0;
        }
    }

    for (int row = 0; row < 4; row++){
        for (int col = 0; col < 4; col++){
           hourglass[row][col] = arr[row][col]+arr[row][col+1]+arr[row][col+2]+arr[row+1][col+1]+arr[row+2][col]
                             +arr[row+2][col+1]+arr[row+2][col+2];
            //printf("%d ", hourglass[row][col]);
        }
        //printf("\n");
    }

    int max = hourglass[0][0];
    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
           if(hourglass[i][j] > max)
               max = hourglass[i][j];
        }
    }

    printf("%d", max);
    return 0;
}

