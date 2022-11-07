#include <stdio.h>

/**
 * 숫자: 5자리
 * 예: 57256
*/
int main(void){
    int num = 23456;
    int total = 0;
    // 코드

    // 5 + 7 + 2 + 5 + 6 = 25
    while(num > 10000) {
        num -= 10000;
        total += 1;
    }
    while(num > 1000) {
        num -= 1000;
        total += 1;
    }
    while(num > 100) {
        num -= 100;
        total += 1;
    }
    while(num > 10) {
        num -= 10;
        total += 1;
    }
    while(num > 0) {
        num -= 1;
        total += 1;
    }
    printf("총합 %d\n", total);
}