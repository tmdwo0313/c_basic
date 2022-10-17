#include <stdio.h>

// 학점 계산기
//   - 사용자로부터 점수(0~100점)
//   - 91~100 : A
//   - 81~90  : B
//   - 71~80  : C
//   - 61~70  : D
//   - ~60    : F

// 프로그램 작성
// 1.사용자로부터 점수 입력
// 2.if문 통해서 점수에 따른 등급(A, B, C, ..) 부여
// 3.점수 및 등급 출력

// 프로그램 조건
//  1.점수는 0~100점
//  2.0~100점 아닌경우는 실행 X

// 1번 무조건 실행
//  - 점수 0~100점 프로그램 실행(2,3)
//  - 점수 0!100점 아니면 실행 X(2,3)
int main(void) {
    int score;
    char grade;

    printf("점수: ");
    scanf("%d", &score);

    // 조건1: score >= 91
    // 조건2: score <= 100
    // &&: AND연산자 → 조건 2개가 모두 참인경우에만 참!
    if(score <= 100 && score >= 91) {
        grade = 'A';
    } else if(score <= 90 && score >= 81) {
        grade = 'B';
    } else if(score <= 80 && score >= 71) {
        grade = 'C';
    } else if(score <= 70 && score >= 61) {
        grade = 'D';
    } else if(score <= 60 && score >= 0) {
        grade = 'F';
    }
    if(score >= 0 && score <100) {
        printf("학생의 점수는 %d점으로 %c학점입니다.", score, grade);
    }

}