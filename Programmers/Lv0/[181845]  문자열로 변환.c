#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    char* answer = (char*)malloc(6*sizeof(char));
    
    sprintf(answer,"%d",n);
    
    return answer;
}

/*
[������ ���ڿ��� ��ȯ]
1. sprintf()
  sprintf(text, "%d", number);
- ��� ���� �μ��ϴµ� ��� 
- printf() �Լ��� �����ϰ� �۵������� �ֿܼ� ���� ���� �μ����� �ʰ� ���ڿ��� ��ȯ 
- <stdio.h> ������� �ʿ� 
 */
