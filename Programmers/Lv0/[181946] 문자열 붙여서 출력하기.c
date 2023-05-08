#include <stdio.h>
#define LEN_INPUT1 11
#define LEN_INPUT2 11

int main(void) {
    char s1[LEN_INPUT1];
    char s2[LEN_INPUT2];
    scanf("%s %s", s1, s2);
    printf("%s%s",s1,s2);

    return 0;
}

/*
[문자열 입력]
1. 문자열을 입력받기 위해서는 포인터가 아닌 배열을 이용해야 한다.
   char s[200];
2. scanf()는 스페이스 또는 엔터시 종료한다. 
   서식지정자 [^\n]을 통해 \n을 입력받기 전까지 문자열을 입력받을 수 있다.
   scanf("%[^\n]s", &str); 
3. gets()는 한 줄을 통째로 읽어들이고, 마지막 엔터를 입력받는 순간 버퍼에 있는 \n을 지워버리고 \0으로 바꾼다. 
4. fgets()는 언제 끝날지 모르는 걸 염두해두기 때문에 배열의 메모리만큼만 출력해준다. 

 */
