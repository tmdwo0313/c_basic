#include <stdio.h>

int func(int num);
int main(void) {
    for(int i=5; i>=0; i--) {
        if(i % 2 == 1) {
            printf("func(%d): %d\n",i , func(i));
        }
    }
}
int func(int num) {
    if(num == 1) {
        return 1;
    } else {
        return num * func(num-1);
    }
}