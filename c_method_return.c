#include <stdio.h>

int main() {
    print_char('*', 5);
}

void print_char(char ch, int count) {
    for(int i=0; i<count; i++) {
        printf("%c", ch);
    }
    // �Լ��� ȣ���ϰ� ����Ǹ� �ٽ� ȣ���ߴ� ������ ���ư�
    // 1.�Լ� ���� �� return���� ������ ����!
    // 2.�Լ� ���� �� }�� ������ ����!
    return;
}