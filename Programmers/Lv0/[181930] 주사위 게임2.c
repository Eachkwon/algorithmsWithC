#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c) {
    int answer = 0;
    
    if(a==b&&b==c) {
        answer = (a+b+c)*(a*a+b*b+c*c)*(pow(a,3)+pow(b,3)+pow(c,3));
    } else if(a!=b&&b!=c&&c!=a) {
        answer = a+b+c;
    } else {
        answer = (a+b+c)*(a*a+b*b+c*c);
    }
    
    return answer;
}
