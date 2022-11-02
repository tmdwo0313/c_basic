#include <stdio.h>

int main(void) {
    for (int i=1; i<=10; i++ ) {
        // if(0) ¡æ False
        // if(1) ¡æ True
        if (i % 2) { 
            printf("Â¦¼ö\n");
        } else {
            printf("È¦¼ö\n");
        }
    } 
}