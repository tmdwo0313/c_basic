#include <stdio.h>

/**
 * ����Լ�(recursive function)
 *  - �ڱ��ڽ��� ȣ���ϴ� �Լ�
 *  - return(��ȯ��) �� �ٽ� �ڱ��ڽ��� ȣ���ϴ�
*/

void fruit(void);

int main(void) {
    fruit();
}
// ���� �ݺ� ȣ���ϴ� ����Լ�
//  - ���� ��� ����!
//  - Fatal Error;
void fruit(void) {
    printf("apple\n");
    fruit();
}