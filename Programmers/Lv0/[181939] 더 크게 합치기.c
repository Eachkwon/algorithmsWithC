#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer = 0;
    int asize = 1, bsize = 1;
    int ab, ba;
    
    while(a/asize!=0) {
        asize *= 10;
    }
    while(b/bsize!=0) {
        bsize *= 10;
    }
    
    ab = a*bsize+b;
    ba = b*asize+a;
    
    if(ab>ba) {
        answer = ab;
    } else {
        answer = ba;
    }
    
    return answer;
}
