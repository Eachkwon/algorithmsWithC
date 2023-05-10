#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int i;
    for(i=0; i<num_list_len; i++) {
        
        while(*(num_list+i)!=1) {                
            *(num_list+i) /= 2;
            
            answer++;
        }
        
    }
    
    return answer;
}
