#include <stdio.h> // 라이브러리

// 정수와 실수 출력
// + 정수(%d), 실수(%lf), 문자(%c), 문자열(%s) 등
//   decimal , long float, character, string

// 정수: 0, 10, -1 ...
// 실수: 0.0, 10.2, -5.5, ...
// 문자: 'A', 'c', ...
// 문자열: "APPLE", "Banana", ...

int main(void)
{
    printf("%d\n", 10);        // %d 위치에 10 출력
    printf("%lf\n", 3.4);      // %lf 위치에 3.4를 소수점 이하 6자리까지 출력
    printf("%.1lf\n", 3.45);   // 소수점 이하 첫째 자리까지 출력(둘째 자리에서 반올림)
    printf("%.10lf\n", 3.4);   // 소수점 이하 10자리까지 출력

    printf("%d과 %d의 합은 %d 입니다.\b", 10, 20, 10 + 20);
    printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

    return 0;
}
