#include <stdio.h>

// 1~10���� �ݺ��ϸ鼭 ¦���� ����ϴ� �ڵ� �ۼ�
// ¦�� �Ǻ�: 2�� ������ �������� 0�̸� ¦��
int main(void) {
    for (int i=1; i<=10; i++ ) {
        // if(0) �� False
        // if(1) �� True
        if (i % 2 == 0) {  // ¦���Ǻ�
            printf("%d\n", i);
        }
    } 
}