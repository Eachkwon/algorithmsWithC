#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* my_string, const char* is_prefix) {
    int answer = 0;
    
    if(memcmp(my_string,is_prefix,strlen(is_prefix))==0) {
        answer = 1;
    }
    
    return answer;
}
