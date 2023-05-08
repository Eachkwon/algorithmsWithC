#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* n_str) {
    int answer = atoi(n_str);
    return answer;
}

/*
[문자열을 정수로 변환하는 함수]
1. atoi()
 int atoi(const char *str);
 - 문자열 시작 부분의 모든 공백을 무시하고 공함백 뒤의 문자를 변환한 다음 숫자 이외의 문자에 도달하면 중지
 - <stdlib.h> 헤더를 포함해야 함 

2. strtol()
 long strtol(const char *string, char **laststr, int basenumber);
 - 공백문자 생략하고 숫자 이외의 문자 도달 시 중지 
 - 문자열을 긴 정수로 변환
 - <stdlib.h> 헤더를 포함해야 함 
 */
