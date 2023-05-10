#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer = 0;
    char cha[11], chb[6];
    int ab;
    
    sprintf(cha,"%d",a);
    sprintf(chb,"%d",b);
    strcat(cha,chb);

    ab = atoi(cha);
    answer = 2*a*b;
    
    if(ab>answer) {
        answer = ab;
    }
    
    return answer;
}
