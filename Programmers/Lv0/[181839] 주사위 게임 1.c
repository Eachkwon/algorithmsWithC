#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer = 0;
    
    if(a%2==0&&b%2==0) {
        answer = abs(a-b);
    } else if (a%2!=0&&b%2!=0) {
        answer = pow(a,2)+pow(b,2);
    } else {
        answer = 2*(a+b);
    }
    
    return answer;
}
