#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* my_string) {
    int* answer = (int*)calloc(52, sizeof(int));
    int i, num;
    
    for(i=0; i<strlen(my_string); i++) {
        if(*(my_string+i)-'Z'<=0) {
            // 알파벳 대문자
            num = *(my_string+i)-'A';
            *(answer+num) += 1;
        } else {
            // 알파벳 소문자
            num = *(my_string+i)-'a';
            *(answer+num+26) += 1;
        }
    }
    
    return answer;
}

/*
[메모리 동적 할당 및 관리]
1. malloc()
void *malloc(size_t size); 
- 메모리를 할당하는 함수
- memory allocation의 약자
- Heap 영역에 할당된 메모리 덩어리 중 첫번째 주소 반환
- 기본적으로 쓰레기 값이 들어있음

2. free()
void free(void *memblock);
- 메모리를 반환하는 함수 

3. memset()
void *memset(void *dest, int c, size_t count);
- 동적할당 시 기본값으로 쓰레기값이 들어가기 때문에 메모리 값을 초기화해주는 함수
- 매개변수: 메모리 주소, 초깃값, 초기화 대상 메모리의 바이트 단위 크기 

4. calloc()
void *calloc(size_t num, size_t size);
- 아예 할당할 때 부터 메모리를 0으로 초기화하고 할당하는 함수 
- 매개변수: 요소의 개수, 각 요소의 바이트 단위 크기 

5. realloc()
void *realloc(void *memblock, size_t size);
- 이미 할당된 메모리를 재할당하는 함수
- 매개변수: 기존에 동저개할당한 메모리의 주소, 다시 할당받을 메모리의 바이트 단위 크기 

6. memcpy()
void *memcpy(void *dest, const void *src, size_t count);
- 메모리에 담긴 정보를 복사하는 함수
- 매개변수: 대상 메모리 주소, 원본 메모리 주소, 복사할 바이트 크기
- 전체 복사하고 싶을 때 sizeof(src) 

7. memcmp()
void memcmp(const void *buf1, const void *buf2, size_t count);
- 메모리를 비교하는 함수 
- 매개변수: 비교 메모리주소1, 비교 메모리주소2, 비교할 메모리의 바이트 단위 크기
- 반환값: 0(같을 때), 양수(첫번째가 두번째보다 클 때), 음수(첫번째가 두번째보다 작을 때) 
 
*/
