#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len, int n) {
    int leng, i, idx;
    idx = 0;
    if(num_list_len%n==0) {
        leng = num_list_len/n;
    } else {
        leng = num_list_len/n+1;
    }
    int* answer = (int*)malloc(sizeof(int)*leng);
    
    for(i=0; i<leng; i++) {
        *(answer+i) = num_list[idx];
        idx+= n;
    }
    
    return answer;
}
