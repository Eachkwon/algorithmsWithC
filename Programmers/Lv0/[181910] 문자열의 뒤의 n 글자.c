#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, int n) {
    int len, i;
    len = strlen(my_string);
    char* answer = (char*)malloc(sizeof(char)*(n+1));
    
    for(i=0; i<n; i++) {
        *(answer+i) = my_string[len-n+i];
    }
    answer[n] = '\0';
    
    return answer;
}
