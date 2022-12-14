#include <stdio.h>

/**
 * �ּҿ� ������
 *  - �ּ�: �޸𸮹����� �ּ�(��: 21����, 99����)
 *  - �ּ� �� ���
 *  - ������ �� ����(�ּ�)
 * 
 *  int a, b;    #a(100����), b(200����)
 *  int *p;
 *  p = &a;
 *  p = &b;
 *  �� p�� 100����, 200���� : ����
 *  �� &a, &b�� �ּ� : ���
 * 
 *  - �� �����Ͱ� ���� �ּ� ����
 *     (�ϳ��� ������ ���ÿ� ����Ű�� �͵� ����)
 *  int a;
 *  int *pa, *pb;
 *  pa = pb = &a;
 *  *pa = 10;
 *  printf("%d", *pb);
 * 
 *  = �ּҴ� ����̱� ������ ���Կ����� ��� �Ұ�
 *  &a = &b; (X) # a(100����), b(200����)
 *  const int num = 4;
 *  num = 10; (X)
 * 
 *  - �������� ũ��� ������ �ּ��� ũ�⿡ ���� ����
 *  - ũ�Ⱑ Ŭ ���� ���� ������ �޸� ��� ����
 *  - �������� ũ��� �����Ϸ��� ���� �ٸ�
 *  - ��� �ּҿ� �����ʹ� ����Ű�� �ڷ����� �������
 *    ũ�Ⱑ ������
*/
int main(void) {
    char ch;
    int in;
    double db;

    char *pc = &ch;
    int *pi = &in;
    double *pd = &db;

    printf("char ���� �ּ� ũ��: %d\n", sizeof(&ch));
    printf("int ���� �ּ� ũ��: %d\n", sizeof(&in));
    printf("double ���� �ּ� ũ��: %d\n", sizeof(&db));

    printf("char *������ �ּ� ũ��: %d\n", sizeof(pc));
    printf("int *������ �ּ� ũ��: %d\n", sizeof(pi));
    printf("double *������ �ּ� ũ��: %d\n", sizeof(pd));

    printf("char *�����Ͱ� ����Ű�� ���� ũ��: %d\n", sizeof(*pc));
    printf("int *�����Ͱ� ����Ű�� ���� ũ��: %d\n", sizeof(*pi));
    printf("double *�����Ͱ� ����Ű�� ���� ũ��: %d\n", sizeof(*pd));
}