#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* n_str) {
    int answer = atoi(n_str);
    return answer;
}

/*
[���ڿ��� ������ ��ȯ�ϴ� �Լ�]
1. atoi()
 int atoi(const char *str);
 - ���ڿ� ���� �κ��� ��� ������ �����ϰ� ���Թ� ���� ���ڸ� ��ȯ�� ���� ���� �̿��� ���ڿ� �����ϸ� ����
 - <stdlib.h> ����� �����ؾ� �� 

2. strtol()
 long strtol(const char *string, char **laststr, int basenumber);
 - ���鹮�� �����ϰ� ���� �̿��� ���� ���� �� ���� 
 - ���ڿ��� �� ������ ��ȯ
 - <stdlib.h> ����� �����ؾ� �� 
 */
