#include <stdio.h>

/**
 * ���� �� �ϳ��� ���� ����
 * ������ �� �ϳ��� �ּҸ� ����
 * �迭 �� (������ �ڷ���)���� ���� ����
 *   - ����1. ������ �ڷ����� ���� ����
 *   - ����2. �迭�� ũ�⸦ �׻� �޸𸮿��� ����
 *            �迭[100] �� 100�� = ����, ������
 *                     �� 0~99 = �ε���
 *            100ĭ �� 2ĭ�� ���! ������ 98ĭ�� ����
 * ����ü(Struct) �� ����1�� �ذ�
 *                  (�پ��� �ڷ���) ���� ����
 *               �� ���� �ڷ���
 *               �� �Լ�����ϵ��� �����ϰ� ���!
*/

struct student {
    int num;        // �й�
    double grade;   // ����
};  // �����ݷ� ���!

int main(void) {
    // ����ü ����� �� ���� ����
    // 1. struct student �� student ����ü ���赵 �ۼ�
    struct student s1;  // 2. student ����ü ����
    struct student s2;  // �ٸ� ��� �� ��ü!
    struct student s3;  // C��� �� C+++, C#
    struct student s4;
    struct student s5;

    s1.num = 2;
    s1.grade = 2.7;

    s5.num = 5;
    s5.grade = 3.5;

    printf("�й�: %d, ����: %.1lf\n", s1.num, s1.grade);
    printf("�й�: %d, ����: %.1lf\n", s5.num, s5.grade);
}