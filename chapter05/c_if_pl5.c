#include <stdio.h>

int main(void) {
    int num1 = 10, num2 = 20, num3 = 50;
    int temp;
    // 정렬: num1 > num2 > num3
    // 조건1: num1 < num2 → 값 교환 : num1 > num2
    // 조건2: num1 < num3 → 값 교환 : num1 > num2, num3
    // 조건3: num2 < num3 → 값 교환 : num2 > num3
    // → num1 > num2 > num3

    if (num1 < num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num1 < num3) { //swap
        temp = num1;
        num1 = num3;
        num3 = temp;
    }

    if (num2 < num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    printf("%d > %d > %d", num1, num2, num3);
}