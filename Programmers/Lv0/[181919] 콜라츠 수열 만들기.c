#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    int m = n;
    int cnt=1;
    while(m!=1) {
        if(m%2==0) {
            m /= 2;
        } else {
            m = 3*m+1;
        }
        cnt++;
    }

    int* answer = (int*)malloc(sizeof(int)*cnt);
    
    int i;
    *answer = n;
    for(i=1; i<cnt; i++) {
        if(n%2==0) {
            n /= 2;
        } else {
            n = 3*n+1;
        }
        
        *(answer+i) = n;
    }
    
    return answer;
}
