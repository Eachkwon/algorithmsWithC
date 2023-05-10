#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int n) {
    int* answer = (int*)malloc(sizeof(int)*arr_len);
    int i;
    
    if(arr_len%2==0) {
        for(i=0; i<arr_len; i++) {
            if(i%2!=0) {
                *(answer+i) = *(arr+i)+n;
            } else {
                *(answer+i) = *(arr+i);
            }
        }
    } else {
        for(i=0; i<arr_len; i++) {
            if(i%2==0) {
                *(answer+i) = *(arr+i)+n;
            } else {
                *(answer+i) = *(arr+i);
            }
        }
    }
  
    return answer;
}
