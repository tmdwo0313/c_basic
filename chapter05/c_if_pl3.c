#include <stdio.h>

int main(void) {
    int num1, num2;
    printf("ù��° ��: ");
    scanf("%d", &num1);
    printf("�ι�° ��: ");
    scanf("%d", &num2);

    printf("%d, %d\n", num1, num2);

    // ����
    // 1. ��1�� ��2���� ū��� ���
    // 2. ��1�� ��2���� ������� ���
    // 3. ��1�� ��2�� ���� ���
    // �� ���ǹ�! ��������

    if (num1 > num2) {
        printf("%d�� %d���� ũ��", num1, num2);
    } else if(num1 < num2) {
        printf("%d�� %d���� �۴�", num1, num2);
    } else {
        printf("%d�� %d�� ����", num1, num2);
    }
}