#include <stdio.h>
#define LEN_INPUT 10

int main(void) {
    char s1[LEN_INPUT];
    int i;
    scanf("%s", s1);
    
    for(i=0;i<strlen(s1);i++) {
        if(s1[i]>'Z') {
            s1[i] -= 32;
        } else {
            s1[i] += 32;
        }
    }
    
    printf("%s",s1);

    return 0;
}

