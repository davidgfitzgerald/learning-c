#include <stdio.h>

int main(void) {
    const int AGE = 29;
    #define AGE_2 30
    printf("AGE = %u\n", AGE);
    printf("AGE_2 = %u\n", AGE_2);
}