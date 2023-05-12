#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len) {
    int* stk = (int*)malloc(sizeof(int)*100000);
    int cnt = 0;
    int i;

    for(i=0; i<arr_len; i++) {
        if(cnt==0) {
            *(stk+cnt) = arr[i];
            cnt++;
        } else if(*(stk+cnt-1)<arr[i]) {
            *(stk+cnt) = arr[i];
            cnt++;
        } else if(*(stk+cnt-1)>=arr[i]){
            *(stk+cnt-1) = 0;
            cnt--;
            i--;
        }
        
    }
    
    realloc(stk,sizeof(int)*cnt);
    
    return stk;
}
