#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    char* answer = (char*)malloc(6*sizeof(char));
    
    sprintf(answer,"%d",n);
    
    return answer;
}

/*
[정수를 문자열로 변환]
1. sprintf()
  sprintf(text, "%d", number);
- 모든 값을 인쇄하는데 사용 
- printf() 함수와 동일하게 작동하지만 콘솔에 직접 값을 인쇄하지 않고 문자열을 반환 
- <stdio.h> 헤더파일 필요 
 */
