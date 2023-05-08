#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

char* solution(const char* my_string, const char* alp) {
    char* answer = (char*)malloc(sizeof(char)*(strlen(my_string)+1));
    int i;
    
    for(i=0; i<strlen(my_string); i++) {
        if(my_string[i]==*alp) {
            *(answer+i) = toupper(my_string[i]);
        } else {
            *(answer+i) = my_string[i];
        }
    }
    
    answer[i] = '\0';
    
    return answer;
}
