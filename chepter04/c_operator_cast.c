// Casting: ����ȯ
//   = int(����) �� double(�Ǽ�)

#include <stdio.h>

int main(void) {
    int a = 20, b = 3;
    double res;

    // 6.7 = 20.- / 3.0
    res = (double)a / (double)b;
    printf("a = %d, b = %d\n", a, b);
    printf("a/b�� ��� : %.1lf\n", res);


    // double �� int (ūtype �� ����type) : ���� �ս�!!!
    a = (int)res;  // res(6.7)
    printf("(int) %.llf�� ���: %d\n", res, a);
}