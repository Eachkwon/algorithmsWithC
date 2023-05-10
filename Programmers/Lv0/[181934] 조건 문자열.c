#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* ineq, const char* eq, int n, int m) {
    int answer = 0;

    if(*ineq=='>'&&*eq=='='){
        return n>=m;
    } else if(*ineq=='<'&&*eq=='=') {
        return n<=m;
    } else if(*ineq=='>'&&*eq=='!') {
        return n>m;
    } else if(*ineq=='<'&&*eq=='!') {
        return n<m;
    }
    
    return answer;
}
