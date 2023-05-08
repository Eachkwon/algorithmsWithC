#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int k) {
    int* answer = (int*)malloc(sizeof(int)*arr_len);
    int i;
    
    if(k%2==0) {
        for(i=0; i<arr_len; i++) {
            answer[i] = arr[i] + k;
        }
    } else {
        for(i=0; i<arr_len; i++) {
            answer[i] = arr[i] * k;
        }
    }
    
    return answer;
}
