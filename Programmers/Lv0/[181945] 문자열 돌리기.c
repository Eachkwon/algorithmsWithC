#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int i;
    scanf("%s", s1);
    
    for(i=0; i<strlen(s1); i++) {
        printf("%c\n",s1[i]);
    }

    return 0;
}
