#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

char* solution(const char* myString) {
    int len, i;
    len = strlen(myString);
    char* answer = (char*)malloc(sizeof(char)*(len+1));
    
    for(i=0; i<len; i++) {
        *(answer+i) = tolower(myString[i]);
    }
    answer[i] = '\0';
    
    return answer;
}
