#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int arr[], size_t arr_len, int idx) {
    int answer = -1;
    int i;
    
    for(i=0; i<arr_len; i++) {
        if(*(arr+i)==1&&i>=idx) {
            return i;
        }
    }
    
    return answer;
}
