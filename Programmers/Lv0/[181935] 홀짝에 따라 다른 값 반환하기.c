#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int i;
    
    if(n%2==0) {
        for(i=1; i<=n; i++) {
            if(i%2==0) {
                answer += i*i;
            }
        }
    } else {
        for(i=1; i<=n;i++) {
            if(i%2!=0) {
                answer += i;
            }
        }
    }
    
    return answer;
}
