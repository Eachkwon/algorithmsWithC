#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

char* solution(const char* myString) {
	int i, len;
	len = strlen(myString); 
    char* answer = (char*)malloc(sizeof(char)*(len+1));
    
    for(i=0; myString[i]!='\0'; i++) {
        answer[i] = toupper(myString[i]);
    }
    
    answer[i] = '\0';
    
    return answer;
}

/*
[���ڿ� ��/�ҹ��� ��ȯ]
1. tolower()/toupper()
 for(i=0; data[i] != '\0'; i++) {
       data[i] = tolower(data[i]);
    }
 - <ctype.h> ��� �� 
    
2. _strlwr_s()/_strupr_s()
 _strlwr_s(data);
 
3. �ƽ�Ű�ڵ� ���
 for(i=0; data[i]!='\0'; i++) {
       if(data[i] >= 'A' && data[i] <='Z') {
	          data[i] +=32;
		}
    }

 */
