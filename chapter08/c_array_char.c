#include <stdio.h>

    /**
     * 문자열을 저장하는 배열
     *   - C언어는 문자열을 저장할 때 char[]배열 사용
     *     문자열: "apple" → char[]
     *   - char배열은 기본 문자열길이보다 1개 더 크게 만듬
     *     char [5] (X) → [6] (0)
     *     apple\0
     *   - 마지막에 문자열의 끝이라는 의미를 포함한 널(\0)문자 저장
     *     char name[5]
     *  
     *   - \0 → 문자열 끝 표시
     * 
     *   - char 배열은 선언시 초기화하면 남은 배열의 요소는 0으로
     *     채워지고 자동으로 문자열 끝에 \0문자 저장
    */
int main(void) {
    char str[80] = "applejam";

    printf("최초 문자열: %s \n", str);
    printf("문자열 입력: ");
    scanf("%s", str); // 문자열 배열은 scanf &안붙임
    printf("입력 후 문자열: %s \n", str);
}