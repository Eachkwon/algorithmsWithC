#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* str1, const char* str2) {
    char* answer = (char*)malloc(sizeof(char)*(strlen(str1)*2+1));
    int i, a, b;
    a = 0;
    b = 0;
    
    for(i=1; i<=strlen(str1)*2; i++) {
        if(i%2!=0) {
            *(answer+i-1) = str1[a];
            a++;
        } else {
            *(answer+i-1) = str2[b];
            b++;
        }
    }
    
    answer[i-1] = '\0';
    
    return answer;
}
