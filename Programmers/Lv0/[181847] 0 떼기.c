#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* n_str) {
    int cnt = 0;
    while(*(n_str+cnt)=='0') {
        cnt++;
    }

    char* answer = (char*)malloc(strlen(n_str)-cnt+1);
    int i;
    for(i=0; i<strlen(n_str)-cnt; i++) {
        *(answer+i) = *(n_str+i+cnt);
    }
    
    *(answer+i) = '\0';
    
    return answer;
}
