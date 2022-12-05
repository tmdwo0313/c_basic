#include <stdio.h>

/**
 * 변수 → 하나의 값을 저장
 * 포인터 → 하나의 주소를 저장
 * 배열 → (동일한 자료형)여러 값을 저장
 *   - 단점1. 동일한 자료형만 저장 가능
 *   - 단점2. 배열의 크기를 항상 메모리에서 점유
 *            배열[100] → 100개 = 길이, 사이즈
 *                     → 0~99 = 인덱스
 *            100칸 → 2칸만 사용! 나머지 98칸을 점유
 * 구조체(Struct) → 단점1을 해결
 *                  (다양한 자료형) 저장 가능
 *               → 복합 자료형
 *               → 함수사용하듯이 선언하고 사용!
*/

struct student {
    int num;        // 학번
    double grade;   // 학점
};  // 세미콜론 사용!

int main(void) {
    // 구조체 사용방법 → 변수 선언
    // 1. struct student → student 구조체 설계도 작성
    struct student s1;  // 2. student 구조체 생성
    struct student s2;  // 다른 언어 → 객체!
    struct student s3;  // C언어 → C+++, C#
    struct student s4;
    struct student s5;

    s1.num = 2;
    s1.grade = 2.7;

    s5.num = 5;
    s5.grade = 3.5;

    printf("학번: %d, 학점: %.1lf\n", s1.num, s1.grade);
    printf("학번: %d, 학점: %.1lf\n", s5.num, s5.grade);
}