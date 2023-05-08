#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len, int n) {
    int i;
    
    int* answer = (int*)malloc(sizeof(int)*(num_list_len-n+1));
    
    for(i=0; i<num_list_len-n+1; i++) {
        *(answer+i) = num_list[n-1+i];
    }

    return answer;
}
