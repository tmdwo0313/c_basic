#include <stdio.h>

int main(void) {
    int total = 0;

    // 1~100���� ���� ����(for)
    for(int i=1; i<=100; i++) {
        total += i;
    }

    // 1~100���� ���� ����(while)
    int num = 1;
    while(num<=100) {
        total += num;
        num++;
    }
    printf("����: %d\n", total);
}