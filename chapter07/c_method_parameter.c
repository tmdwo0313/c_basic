#include <stdio.h>

/**
 * 
 * int main() {
 *      printf("%d", sum(5, 10));
 * }
 *     ��        (return)
 *     ��           ��
 *     ��           ��
 *     ��           ��       
 * (parameters)
 * int sum(int x, int y) {
 *    return x + y;
 * }
*/
// �Լ� �� (�Ű�����), return
// �Լ� ��        X, return
//int get_num(void);

// main()�Լ� ���� �Լ��� ����Ǹ�, �Լ����� ������ �ʿ� ����
// void: �ش簪�� ������� ���� ���
int get_num(void) {
    int num;
    printf("number: ");
    scanf("%d", &num);
    return num;
}

int main(void) {
    printf("��: %d", get_num());
}