#include <stdio.h>
#include <string.h>

// 메뉴표 생성(전역)
char *burger_name[3] = {"빅맥", "통새우와퍼", "싸이버거"};
char *side_name[3] = {"맥너겟", "치즈스틱", "오징어링"};
char *drink_name[3] = {"코카콜라", "제로콜라", "스프라이트"};

// 가격표 생성(전역)
int burger_price[3] = {5900, 5500, 4300};
int side_price[3] = {2000, 1500, 2000};
int drink_price[3] = {1200, 1000, 1000};

// 고객 주문 기록 저장(전역)
char *menu_save[10] = {};    // 주문 메뉴
int price_save[10] = {};     // 주문 가격

void print_main_menu(void);
void print_order(void);
int choice_burger(void);
int choice_side(void);
int choice_drink(void);
int empty_order_search(void);
void print_total_order(void);

int main() {
    while(1) {
        // 1.메인 메뉴 출력
        print_main_menu();

        // 2.사용자 메인 메뉴 선택
        int menu_num = 0;  // 사용자가 선택한 메뉴번호 저장

        puts("■ 원하시는 메뉴번호를 선택하세요.");
        while(1) {
            printf(">> 번호: ");
            scanf("%d", &menu_num);
            if(menu_num >= 1 && menu_num <= 4) {  // in
                break;
            } else {
                puts("Warling: 1~4의 번호를 입력해주세요.");
            }
        }

        // 3.세부메뉴 출력 (1~4 in)
        int order_num; // 사용자가 선택한 서브메뉴 번호
        int empty_idx;
        if(menu_num == 1) {         // 햄버거 세트
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
        } else if(menu_num == 2) {  // 햄버거
            empty_idx = empty_order_search();
            order_num = choice_burger();
            menu_save[empty_idx] = burger_name[order_num=1];  // 버거 이름
            price_save[empty_idx] = burger_price[order_num-1];  // 버거 가격
            print_order();

        } else if(menu_num == 3) {  // 사이드
            empty_idx = empty_order_search();
            order_num = choice_side();
            menu_save[empty_idx] = side_name[order_num=1];
            price_save[empty_idx] = side_price[order_num-1];
            print_order();

        } else if(menu_num == 4) {  // 드링크
            empty_idx = empty_order_search();
            order_num = choice_drink();
            menu_save[empty_idx] = drink_name[order_num=1];
            price_save[empty_idx] = drink_price[order_num-1];
            print_order();
        }

        // 추가 주문 유무
        puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
        puts("■ 추가 주문하시겠습니까? (yes=1/no=0)");
        printf(">>입력: ");
        char order_yn;
        scanf("%d", &order_yn);
        printf(">>> %d ", order_yn);
        if(order_yn == 1) {
            continue;
        } else {
            // 고객이 주문한 메뉴정보와 총가격을 출력
            print_total_order();
            break;
        }
    }
    // + 기존 주문기록(3칸) → 늘려서(100칸)
    // + 주문할때마다 몇 개째 count
    // 결제정보 출력
    // 1.주문했던 기록 → 메뉴, 총가격 출력
}

// 메인 메뉴를 출력하는 함수
void print_main_menu(void) {
    printf("");
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    puts("■ == CNU 버거 2022 ==");
    puts("■  - vers 1.0");
    puts("■  - develop by cholong02");
    puts("■  - date 2022.12.07");
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    puts("■ 저희 매장을 찾아주셔서 감사합니다.");
    puts("■ 원하시는 메뉴를 선택해주세요.");
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    puts("■ 1.햄버거 세트");  // 햄버거, 사이드, 음료
    puts("■ 2.햄버거 메뉴");  // 햄버거
    puts("■ 3.사이드 메뉴");  // 사이드
    puts("■ 4.드링크 메뉴");  // 음료
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
}


// 1. 햄버거 주문
int choice_burger(void) {
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    puts("== Burger Menu ==");
    for(int i=0; i<3; i++) {
        printf("□□ %d.%s(%d원)\n", i+1, burger_name[i], burger_price[i]);
    }
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    int choice_num;
    while(1) {
        printf(">> 번호:");
        scanf("%d", &choice_num);
        if(choice_num >= 1 && choice_num <= 3) {
            break;
        } else {
            puts("Warling: 1~3의 번호를 입력해주세요.");
        }
    }
    return choice_num;
}
// 2. 사이드 주문
int choice_side(void) {
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    puts("== Side Menu ==");
    for(int i=0; i<3; i++) {
        printf("□□ %d.%s(%d원)\n", i+1, side_name[i], side_price[i]);
    }
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    int choice_num;
    while(1) {
        printf(">> 번호:");
        scanf("%d", &choice_num);
        if(choice_num >= 1 && choice_num <= 3) {
            break;
        } else {
            puts("Warling: 1~3의 번호를 입력해주세요.");
        }
    }
    return choice_num;
}
// 3. 드링크 주문
int choice_drink(void) {
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    puts("== Burger Menu ==");
    for(int i=0; i<3; i++) {
        printf("□□ %d.%s(%d원)\n", i+1, drink_name[i], drink_price[i]);
    }
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    int choice_num;
    while(1) {
        printf(">> 번호:");
        scanf("%d", &choice_num);
        if(choice_num >= 1 && choice_num <= 3) {
            break;
        } else {
            puts("Warling: 1~3의 번호를 입력해주세요.");
        }
    }
    return choice_num;
}

// 주문한 메뉴와 가격을 출력
void print_order(void) {
    int menu_len = sizeof(menu_save) / sizeof(menu_save[0]);
    int price_len = sizeof(price_save) / sizeof(price_save[0]);

    for (int i=0; i<menu_len; i++) {
        printf("주문[%d]: %s\n", i, menu_save[i]);
    }
    for (int i=0; i<price_len; i++) {
        printf("가격[%d]: %d\n", i, price_save[i]);
    }
}

// 주문기록 빈칸 찾기
int empty_order_search() {
    int order_len = sizeof(price_save) / sizeof(price_save[0]);
    int price, idx;
    // 배열 크기만큼 반복 → ex)배열크기가 10칸 : 10번 반복
    for(int i=0; i<order_len; i++) {
        price = price_save[i];
        if(price == 0) {
            idx = i;
            break;
        }
    }
    return idx;
}

// 전체 주문정보와 총가격 출력
void print_total_order(void) {
    // 총 가격 계산
    
    int total_price = 0;
    int order_len = sizeof(price_save) / sizeof(price_save[0]);
    for(int i=0; i<order_len; i++) {
        total_price += price_save[i];
    }
    // 출력
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    puts("■ 고객님이 주문하신 메뉴는");
    for(int i=0; i<order_len; i++) {
        if(menu_save[i] == NULL) {
            break;
        }
        printf("□□ %d: %s\n", (i+1), menu_save[i]);
    }
    printf("■ 으로 총 주문금액은 %d원 입니다.", total_price);
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    puts("이용해주셔서 감사합니다.");
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
}