#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len) {
    int* answer = (int*)malloc(sizeof(int)*(num_list_len+1));
    int i;
    
    for(i=0; i<num_list_len; i++) {
        *(answer+i) = num_list[i];
    }
    
    if(num_list[i-1]>num_list[i-2]) {
        *(answer+i) = num_list[i-1] - num_list[i-2];
    } else {
        *(answer+i) = num_list[i-1]*2;
    }
    
    return answer;
}
