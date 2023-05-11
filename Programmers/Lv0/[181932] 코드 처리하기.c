#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* code) {
    char* answer = (char*)malloc(sizeof(char)*(strlen(code)+1));
    int i;
    int cnt = 0;
    char mode = '0';
    
    for(i=0; i<strlen(code); i++) {
        if(*(code+i)=='1'&&mode=='0') {
            mode = '1';
        } else if(*(code+i)=='1'&&mode=='1') {
            mode = '0';
        } else {
            if(mode=='0'&&i%2==0) {
                *(answer+cnt) = *(code+i);
                cnt++;
            } else if(mode=='1'&&i%2!=0) {
                *(answer+cnt) = *(code+i);
                cnt++;
            }
        }
    }
    
    if(cnt==0) return "EMPTY" ;
    
    *(answer+cnt) = '\0';
    realloc(answer,sizeof(char)*(cnt+1));
    
    return answer;
}
