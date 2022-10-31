#include <stdio.h>

/**
 * for문: 초기식, 조건식, 증감식으로 구성
 *   - 반복횟수를 세는 변수(i)는 반복문
 *     안에서 변경 금지(개발자 규칙)
*/
int main(void){
    int a = 1;
    
    // 반복횟수가 정해짐
    // → 반복횟수 count : i
    // i = 0, 1, 2 → 3번반복
    // i = 1, 2, 3, ..., 9  → 9번 반복
    for (int i=0; i<10; i++) {
        a = a * 2;
        // i = i + 1; X
    }
    printf("a : %d\n", a);
}