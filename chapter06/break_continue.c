#include <stdio.h>
/**
 * Break & Continue ��
 *   - �ݺ������� �ַ� ���
 * 
 *   - break: ��� �ݺ����� ����������
 *            �� ���ķ� �ݺ��� ���� X
 * 
 *   - continue: ��� ���� �ݺ����� �Ѿ��
 *               �� ���ķ� �ݺ��� ���� O
 * 
*/

int main(void){
    for(int i=1; i<=10; i++) {
        if(i % 2 == 0){
            continue;
        }
        printf("%d\n", i);
    }
}