#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, int k) {

    char* answer = (char*)malloc(sizeof(char)*(strlen(my_string)*k)+1);
    int i;
    
    strcpy(answer,my_string);
    
    for(i=1; i<k; i++) {
        strcat(answer,my_string);
    }
    
    return answer;
}

/*
[C언어 문자열 함수]
1. strlen(): 문자열의 길이를 알려줌
   int len = strlen(문자열);
2. strcpy(): 문자열을 복사함
   strcpy(문자열 배열 A, 문자열 B);
3. strcat(): 두 문자열을 붙임
   strcat(문자열 A, 문자열 B);
4. strcmp(): 두 문자열을 비교하고 문자열이 같으면 0, 틀리면 -1을 반환  
   strcmp(문자열 A, 문자열 B);
5. atoi()/atol()/atof(): 문자열을 각 정수, long ,float으로 변환
   int a = atoi("1234");
6. itoa(): 정수를 문자열로 전환
   itoa(int value, char *str, int radix); 
*/
