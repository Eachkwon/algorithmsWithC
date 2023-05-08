#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, const char* control) {
    int answer = n;
    int i;
    char c;
    
    for(i=0; i<strlen(control);i++) {
        c = control[i];
        
        if(c=='w') {
            answer += 1;
        } else if(c=='s') {
            answer -= 1;
        } else if(c=='d') {
            answer += 10;
        } else if(c=='a') {
            answer -= 10;
        }
    }
    
    return answer;
}
