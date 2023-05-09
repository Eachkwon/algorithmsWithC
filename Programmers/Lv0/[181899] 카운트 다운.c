#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int start, int end) {
    int* answer = (int*)malloc(sizeof(int)*(start-end+1));
    int i,s;
    s = start;
    
    for(i=0; i<start-end+1; i++) {
        *(answer+i) = s;
        s--;
    }
    
    return answer;
}
