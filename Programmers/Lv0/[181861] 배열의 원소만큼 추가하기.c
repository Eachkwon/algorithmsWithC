#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len) {
    int i;
    int sum = 0;
    for(i=0; i<arr_len; i++) {
        sum += *(arr+i);
    }
    
    int* answer = (int*)malloc(sizeof(int)*sum);
    
    int cnt = 0;
    int idx = 0;
    for(i=0; i<sum; i++) {
        *(answer+i) = *(arr+idx);
        cnt++;
        if(*(arr+idx)==cnt) {
            idx++;
            cnt = 0;
        }
    }
    
    return answer;
}
