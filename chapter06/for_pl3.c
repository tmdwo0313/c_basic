#include <stdio.h>

int main(void) {
    for (int i=1; i<=10; i++ ) {
        // if(0) �� False
        // if(1) �� True
        if (i % 2) { 
            printf("¦��\n");
        } else {
            printf("Ȧ��\n");
        }
    } 
}