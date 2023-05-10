#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* ineq, const char* eq, int n, int m) {
    int answer = 0;

    if(strcmp(ineq,">")==0&&strcmp(eq,"=")==0&&n>=m){
        answer = 1;
    } else if(strcmp(ineq,"<")==0&&strcmp(eq,"=")==0&&n<=m) {
        answer = 1;
    } else if(strcmp(ineq,">")==0&&strcmp(eq,"!")==0&&n>m) {
        answer = 1;
    } else if(strcmp(ineq,"<")==0&&strcmp(eq,"!")==0&&n<m) {
        answer = 1;
    }
    
    return answer;
}
