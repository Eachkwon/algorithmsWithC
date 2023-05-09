#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* arr[], size_t arr_len) {
    char* answer = (char*)malloc(sizeof(char)*(arr_len+1));
    int i;
    
    for(i=0; i<arr_len; i++) {
        *(answer+i) = *arr[i];
    }
    
    answer[i] = '\0';

    return answer;
}

