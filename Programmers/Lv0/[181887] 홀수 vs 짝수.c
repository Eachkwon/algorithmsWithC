#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int odd = num_list[0];
    int even = num_list[1];
    int i;
    
    for(i=2; i<num_list_len; i++) {
        if(i%2==0) {
            odd += num_list[i];
        } else {
            even += num_list[i];
        }
    }
    
    if(even >= odd) {
        answer = even;
    } else {
        answer = odd;
    }
    return answer;
}
