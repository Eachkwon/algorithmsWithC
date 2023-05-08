#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int multi, pow, i;
    
    multi = 1;
    pow = 0;
    
    for(i=0; i<num_list_len; i++) {
        multi *= num_list[i];
        pow += num_list[i];
    }
    
    pow *=pow;
    
    if(multi<pow) {
        answer = 1;
    }
    
    return answer;
}
