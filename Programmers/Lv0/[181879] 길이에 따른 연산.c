#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int i;
    
    if(num_list_len>10)
    {
        for(i=0; i<num_list_len; i++)
        {
            answer += num_list[i];
        }
    }
    else
    {
        answer = 1;
        for(i=0; i<num_list_len; i++)
        {
            answer *= num_list[i];
        }
    }
    return answer;
}
