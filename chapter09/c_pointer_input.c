#include <stdio.h>

/**
 * ������ ���� ��Ģ
 *  - �����ʹ� ����Ű�� ������ ���°� ���� ���� ����
 *  - 
*/

int main(void) {
    int a = 10;    // a(100����)
    int *p = &a;   // p(100����)
    double *pd;    // pd(�ּ�)
    // pd = p; (X)
    pd = (double *)p; // (O) ����ȯ
    printf("%lf\n", *pd);
}