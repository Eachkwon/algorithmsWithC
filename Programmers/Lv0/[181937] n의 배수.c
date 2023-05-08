#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int n) {
    int answer;
    if(num%n==0)
    {
        answer = 1;
    }
    else
    {
        answer = 0;
    }
    return answer;
}
