#include <stdio.h>

int main(void){
    int a = 10, b = 20, res;

    // 삼항연산자 = (조건) ? 값1 : 값2
    res = (a > b) ? a : b;
    printf("큰 값; %d\n", res);
}