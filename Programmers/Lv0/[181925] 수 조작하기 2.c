#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int numLog[], size_t numLog_len) {
    char* answer = (char*)malloc(sizeof(char)*(numLog_len+1));
    int i, result;
    char ch;
    
    for(i=1; i<numLog_len; i++) {
        result = *(numLog+i) - *(numLog+i-1);
        
        switch(result) {
            case 1 : ch = 'w'; 
                break;
            case -1 : ch = 's';
                break;
            case 10 : ch = 'd';
                break;
            case -10 : ch = 'a';
                break;
        }
        
        *(answer+i-1) = ch;
    }
    
    *(answer+i-1) = '\0';
    
    return answer;
}
