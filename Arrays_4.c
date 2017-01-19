/*
Given an array of n integers and a number, d, perform d left rotations on the array. Then print the updated array as a single line of space-separated integers.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, d, realD, tmp;
    int* tmpArr;
    scanf(" %d", &n);
    scanf(" %d", &d);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf(" %d", &arr[i]);
    }

    if(d>=n){
        realD = n%d;
    }
    else{
        realD = d;
    }


    tmpArr = (int*) malloc(sizeof(int)*realD);
    for(int i=0; i<realD; i++){
        tmpArr[i] = arr[i];
        }
    for(int i=0; i<n-realD; i++){
        arr[i] = arr[i+realD];
        }


    for(int i=0; i<realD; i++){
            arr[n-realD+i] = tmpArr[i];
        }


    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
