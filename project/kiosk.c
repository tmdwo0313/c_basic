#include <stdio.h>
#include <string.h>

// �޴�ǥ ����(����)
char *burger_name[3] = {"���", "��������", "���̹���"};
char *side_name[3] = {"�Ƴʰ�", "ġ�ƽ", "��¡�"};
char *drink_name[3] = {"��ī�ݶ�", "�����ݶ�", "��������Ʈ"};

// ����ǥ ����(����)
int burger_price[3] = {5900, 5500, 4300};
int side_price[3] = {2000, 1500, 2000};
int drink_price[3] = {1200, 1000, 1000};

// �� �ֹ� ��� ����(����)
char *menu_save[10] = {};    // �ֹ� �޴�
int price_save[10] = {};     // �ֹ� ����

void print_main_menu(void);
void print_order(void);
int choice_burger(void);
int choice_side(void);
int choice_drink(void);
int empty_order_search(void);
void print_total_order(void);

int main() {
    while(1) {
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
        int order_num; // ����ڰ� ������ ����޴� ��ȣ
        int empty_idx;
        if(menu_num == 1) {         // �ܹ��� ��Ʈ
            empty_idx = empty_order_search();
            order_num = choice_burger();
            menu_save[empty_idx] = burger_name[order_num=1];
            price_save[empty_idx] = burger_price[order_num-1];

            empty_idx = empty_order_search();
            order_num = choice_side();
            menu_save[empty_idx] = side_name[order_num=1];
            price_save[empty_idx] = side_price[order_num-1];

            empty_idx = empty_order_search();
            order_num = choice_drink();
            menu_save[empty_idx] = drink_name[order_num=1];
            price_save[empty_idx] = drink_price[order_num-1];
            print_order();
        } else if(menu_num == 2) {  // �ܹ���
            empty_idx = empty_order_search();
            order_num = choice_burger();
            menu_save[empty_idx] = burger_name[order_num=1];  // ���� �̸�
            price_save[empty_idx] = burger_price[order_num-1];  // ���� ����
            print_order();

        } else if(menu_num == 3) {  // ���̵�
            empty_idx = empty_order_search();
            order_num = choice_side();
            menu_save[empty_idx] = side_name[order_num=1];
            price_save[empty_idx] = side_price[order_num-1];
            print_order();

        } else if(menu_num == 4) {  // �帵ũ
            empty_idx = empty_order_search();
            order_num = choice_drink();
            menu_save[empty_idx] = drink_name[order_num=1];
            price_save[empty_idx] = drink_price[order_num-1];
            print_order();
        }

        // �߰� �ֹ� ����
        puts("�������������������������������������������");
        puts("�� �߰� �ֹ��Ͻðڽ��ϱ�? (yes=1/no=0)");
        printf(">>�Է�: ");
        char order_yn;
        scanf("%d", &order_yn);
        printf(">>> %d ", order_yn);
        if(order_yn == 1) {
            continue;
        } else {
            // ���� �ֹ��� �޴������� �Ѱ����� ���
            print_total_order();
            break;
        }
    }
    // + ���� �ֹ����(3ĭ) �� �÷���(100ĭ)
    // + �ֹ��Ҷ����� �� ��° count
    // �������� ���
    // 1.�ֹ��ߴ� ��� �� �޴�, �Ѱ��� ���
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


// 1. �ܹ��� �ֹ�
int choice_burger(void) {
    puts("�������������������������������������");
    puts("== Burger Menu ==");
    for(int i=0; i<3; i++) {
        printf("��� %d.%s(%d��)\n", i+1, burger_name[i], burger_price[i]);
    }
    puts("�������������������������������������");
    int choice_num;
    while(1) {
        printf(">> ��ȣ:");
        scanf("%d", &choice_num);
        if(choice_num >= 1 && choice_num <= 3) {
            break;
        } else {
            puts("Warling: 1~3�� ��ȣ�� �Է����ּ���.");
        }
    }
    return choice_num;
}
// 2. ���̵� �ֹ�
int choice_side(void) {
    puts("�������������������������������������");
    puts("== Side Menu ==");
    for(int i=0; i<3; i++) {
        printf("��� %d.%s(%d��)\n", i+1, side_name[i], side_price[i]);
    }
    puts("�������������������������������������");
    int choice_num;
    while(1) {
        printf(">> ��ȣ:");
        scanf("%d", &choice_num);
        if(choice_num >= 1 && choice_num <= 3) {
            break;
        } else {
            puts("Warling: 1~3�� ��ȣ�� �Է����ּ���.");
        }
    }
    return choice_num;
}
// 3. �帵ũ �ֹ�
int choice_drink(void) {
    puts("�������������������������������������");
    puts("== Burger Menu ==");
    for(int i=0; i<3; i++) {
        printf("��� %d.%s(%d��)\n", i+1, drink_name[i], drink_price[i]);
    }
    puts("�������������������������������������");
    int choice_num;
    while(1) {
        printf(">> ��ȣ:");
        scanf("%d", &choice_num);
        if(choice_num >= 1 && choice_num <= 3) {
            break;
        } else {
            puts("Warling: 1~3�� ��ȣ�� �Է����ּ���.");
        }
    }
    return choice_num;
}

// �ֹ��� �޴��� ������ ���
void print_order(void) {
    int menu_len = sizeof(menu_save) / sizeof(menu_save[0]);
    int price_len = sizeof(price_save) / sizeof(price_save[0]);

    for (int i=0; i<menu_len; i++) {
        printf("�ֹ�[%d]: %s\n", i, menu_save[i]);
    }
    for (int i=0; i<price_len; i++) {
        printf("����[%d]: %d\n", i, price_save[i]);
    }
}

// �ֹ���� ��ĭ ã��
int empty_order_search() {
    int order_len = sizeof(price_save) / sizeof(price_save[0]);
    int price, idx;
    // �迭 ũ�⸸ŭ �ݺ� �� ex)�迭ũ�Ⱑ 10ĭ : 10�� �ݺ�
    for(int i=0; i<order_len; i++) {
        price = price_save[i];
        if(price == 0) {
            idx = i;
            break;
        }
    }
    return idx;
}

// ��ü �ֹ������� �Ѱ��� ���
void print_total_order(void) {
    // �� ���� ���
    
    int total_price = 0;
    int order_len = sizeof(price_save) / sizeof(price_save[0]);
    for(int i=0; i<order_len; i++) {
        total_price += price_save[i];
    }
    // ���
    puts("�������������������������������������");
    puts("�� ������ �ֹ��Ͻ� �޴���");
    for(int i=0; i<order_len; i++) {
        if(menu_save[i] == NULL) {
            break;
        }
        printf("��� %d: %s\n", (i+1), menu_save[i]);
    }
    printf("�� ���� �� �ֹ��ݾ��� %d�� �Դϴ�.", total_price);
    puts("�������������������������������������");
    puts("�̿����ּż� �����մϴ�.");
    puts("�������������������������������������");
}