#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* myString) {
    char* answer = (char*)malloc(sizeof(char)*(strlen(myString)+1));
    
    strcpy(answer,myString);
    int i;
    for(i=0; i< strlen(myString); i++) {
        if(*(answer+i)-'a'==0||*(answer+i)-'A'==0) {
            *(answer+i) = 'A';
        } else if(isupper(*(answer+i))) {
            *(answer+i) = tolower(*(answer+i));
        }
    }
    
    return answer;
}
