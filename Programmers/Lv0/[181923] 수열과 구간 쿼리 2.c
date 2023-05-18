#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows, size_t queries_cols) {
    int* answer = (int*)malloc(sizeof(int)*queries_rows);
    int i, j, start, end, num, min;
    
    for(i=0; i<queries_rows; i++) {
        start = queries[i][0];
        end = queries[i][1];
        num = queries[i][2];
        min = 1000001;
        for(j=start; j<=end; j++) {
            if(arr[j]>num&&arr[j]<min)
                min = arr[j];
        }
        
        if(min==1000001) {
            *(answer+i) = -1;
        } else {
            *(answer+i) = min;
        }
    }
    
    return answer;
}
