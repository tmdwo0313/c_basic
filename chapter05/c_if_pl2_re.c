#include <stdio.h>

// ���� ���� - �����丵

int main(void) {
    int score;
    char grade;

    printf("����: ");
    scanf("%d", &score);

    if(score >= 0 && score <= 100) {
        // ����: 0~100��
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
        printf("�л��� ������ %d������ %c�����Դϴ�.", score, grade);
    } else {
        // ����: 0�� �̸� �Ǵ� 100�� �ʰ�
        printf("ERROR: 0~100�� ���̿� ���� �Է��ϼ���");
    }
}