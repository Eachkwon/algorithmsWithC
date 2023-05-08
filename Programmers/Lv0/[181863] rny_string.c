#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* rny_string) {
    char* answer = (char*)malloc(sizeof(char)*(201));
    int len, i,idx;
    len = strlen(rny_string);
    idx = 0;
    
    for(i=0; i< len; i++) {
        if(rny_string[i]=='m') {
            answer[idx] = 'r';
            answer[idx+1] = 'n';
            idx += 2;
        } else {
            answer[idx] = rny_string[i];
            idx++;
        }
    }
    
    answer[idx] = '\0';
    
    return answer;
}
