#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* my_string) {
    int* answer = (int*)calloc(52, sizeof(int));
    int i, num;
    
    for(i=0; i<strlen(my_string); i++) {
        if(*(my_string+i)-'Z'<=0) {
            // ���ĺ� �빮��
            num = *(my_string+i)-'A';
            *(answer+num) += 1;
        } else {
            // ���ĺ� �ҹ���
            num = *(my_string+i)-'a';
            *(answer+num+26) += 1;
        }
    }
    
    return answer;
}

/*
[�޸� ���� �Ҵ� �� ����]
1. malloc()
void *malloc(size_t size); 
- �޸𸮸� �Ҵ��ϴ� �Լ�
- memory allocation�� ����
- Heap ������ �Ҵ�� �޸� ��� �� ù��° �ּ� ��ȯ
- �⺻������ ������ ���� �������

2. free()
void free(void *memblock);
- �޸𸮸� ��ȯ�ϴ� �Լ� 

3. memset()
void *memset(void *dest, int c, size_t count);
- �����Ҵ� �� �⺻������ �����Ⱚ�� ���� ������ �޸� ���� �ʱ�ȭ���ִ� �Լ�
- �Ű�����: �޸� �ּ�, �ʱ갪, �ʱ�ȭ ��� �޸��� ����Ʈ ���� ũ�� 

4. calloc()
void *calloc(size_t num, size_t size);
- �ƿ� �Ҵ��� �� ���� �޸𸮸� 0���� �ʱ�ȭ�ϰ� �Ҵ��ϴ� �Լ� 
- �Ű�����: ����� ����, �� ����� ����Ʈ ���� ũ�� 

5. realloc()
void *realloc(void *memblock, size_t size);
- �̹� �Ҵ�� �޸𸮸� ���Ҵ��ϴ� �Լ�
- �Ű�����: ������ �������Ҵ��� �޸��� �ּ�, �ٽ� �Ҵ���� �޸��� ����Ʈ ���� ũ�� 

6. memcpy()
void *memcpy(void *dest, const void *src, size_t count);
- �޸𸮿� ��� ������ �����ϴ� �Լ�
- �Ű�����: ��� �޸� �ּ�, ���� �޸� �ּ�, ������ ����Ʈ ũ��
- ��ü �����ϰ� ���� �� sizeof(src) 

7. memcmp()
void memcmp(const void *buf1, const void *buf2, size_t count);
- �޸𸮸� ���ϴ� �Լ� 
- �Ű�����: �� �޸��ּ�1, �� �޸��ּ�2, ���� �޸��� ����Ʈ ���� ũ��
- ��ȯ��: 0(���� ��), ���(ù��°�� �ι�°���� Ŭ ��), ����(ù��°�� �ι�°���� ���� ��) 
 
*/
