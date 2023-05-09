#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* myString) {
    char* answer = (char*)malloc(sizeof(char)*(strlen(myString)+1));
    int i;
    
    for(i=0; i<strlen(myString); i++) {
        if(*(myString+i)<'l') {
            *(answer+i) = 'l';
        } else {
            *(answer+i) = *(myString+i);
        }
    }
    
    answer[i] = '\0';
    
    return answer;
}
