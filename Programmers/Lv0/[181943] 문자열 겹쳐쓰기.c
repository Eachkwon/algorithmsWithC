#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, const char* overwrite_string, int s) {
    char* answer = (char*)malloc(sizeof(char)*(strlen(my_string)+1));
    int i,idx;
    
    for(i=0; i<s; i++) {
        *(answer+idx) = my_string[i];
        idx++;
    }
    
    for(i=0; i<strlen(overwrite_string); i++) {
        *(answer+idx) = overwrite_string[i];
        idx++;
    }
    
    for(i=idx; i<strlen(my_string);i++) {
        *(answer+idx) = my_string[i];
        idx++;
    }
    
    answer[idx] = '\0';
        
    return answer;
}
