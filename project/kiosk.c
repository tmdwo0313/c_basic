#include <stdio.h>
#include <string.h>

// �޴�ǥ ����(����)
char *burger_name[3] = {"���", "��������", "���̹���"};
char *sid_name[3] = {"�Ƴʰ�", "ġ�ƽ", "��¡�"};
char *drink_name[3] = {"��ī�ݶ�", "�����ݶ�", "��������Ʈ"};

// ����ǥ ����(����)
int burger_price[3] = {5900, 5500, 4300};
int side_price[3] = {2000, 1500, 2000};
int drink_price[3] = {1200, 1000, 1000};

// �� �ֹ� ��� ����(����)
char *menu_save[3] = {};    // �ֹ� �޴�
int price_save[3] = {};     // �ֹ� ����

void print_main_menu(void);

int main() {
    // 1.���� �޴� ���
    print_main_menu();

    // 2.����� ���� �޴� ����
    int menu_num = 0;  // ����ڰ� ������ �޴���ȣ ����

    puts("�� ���Ͻô� �޴���ȣ�� �����ϼ���.");
    while(1) {
        printf(">> ��ȣ: ");
        scanf("%d", &menu_num);
        if(menu_num >= 1 && menu_num <= 4) {  // in
            break;
        } else {
            puts("Warling: 1~4�� ��ȣ�� �Է����ּ���.");
        }
    }

    // 3.���θ޴� ��� (1~4 in)
    int choice_num; // ����ڰ� ������ ���� �޴���ȣ ����
    if(menu_num == 1) {         // �ܹ��� ��Ʈ

    } else if(menu_num == 2) {  // �ܹ���
        puts("�������������������������������������");
        puts("== Burger Menu ==");
        for(int i=0; i<3; i++) {
            printf("��� %d.%s(%d��)\n", i+1, burger_name[i], burger_price[i]);
        }
        puts("�������������������������������������");
        while(1) {
            printf(">> ��ȣ:");
            scanf("%d", &choice_num);
            if(choice_num >= 1 && choice_num <= 3) {
                break;
            } else {
                puts("Warling: 1~3�� ��ȣ�� �Է����ּ���.");
            }
        }
    } else if(menu_num == 3) {  // ���̵�

    } else if(menu_num == 4) {  // �帵ũ

    }
}

// ���� �޴��� ����ϴ� �Լ�
void print_main_menu(void) {
    printf("");
    puts("�������������������������������������������");
    puts("�� == CNU ���� 2022 ==");
    puts("��  - vers 1.0");
    puts("��  - develop by cholong02");
    puts("��  - date 2022.12.07");
    puts("�������������������������������������������");
    puts("�� ���� ������ ã���ּż� �����մϴ�.");
    puts("�� ���Ͻô� �޴��� �������ּ���.");
    puts("�������������������������������������������");
    puts("�� 1.�ܹ��� ��Ʈ");  // �ܹ���, ���̵�, ����
    puts("�� 2.�ܹ��� �޴�");  // �ܹ���
    puts("�� 3.���̵� �޴�");  // ���̵�
    puts("�� 4.�帵ũ �޴�");  // ����
    puts("�������������������������������������������");
}