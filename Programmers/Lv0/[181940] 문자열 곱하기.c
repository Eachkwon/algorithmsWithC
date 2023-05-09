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
[C��� ���ڿ� �Լ�]
1. strlen(): ���ڿ��� ���̸� �˷���
   int len = strlen(���ڿ�);
2. strcpy(): ���ڿ��� ������
   strcpy(���ڿ� �迭 A, ���ڿ� B);
3. strcat(): �� ���ڿ��� ����
   strcat(���ڿ� A, ���ڿ� B);
4. strcmp(): �� ���ڿ��� ���ϰ� ���ڿ��� ������ 0, Ʋ���� -1�� ��ȯ  
   strcmp(���ڿ� A, ���ڿ� B);
5. atoi()/atol()/atof(): ���ڿ��� �� ����, long ,float���� ��ȯ
   int a = atoi("1234");
6. itoa(): ������ ���ڿ��� ��ȯ
   itoa(int value, char *str, int radix); 
*/
