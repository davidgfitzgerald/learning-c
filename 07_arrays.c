#include <stdio.h>

int main(void) {
    int prices[5];  // define an array that contains exactly 5 integers.
    printf("Size of prices is %lu bytes\n", sizeof(prices));  // 20 bytes

    int prices_2[5] = { 1, 2, 3, 4, 5 };
    printf("prices_2 has these numbers in it:");

    int size = sizeof(prices_2) / sizeof(prices_2[0]);  // calculate the number of bytes in the array

    for (int i = 0; i < size; i++) {
        printf(" %u", prices_2[i]);
    }
    printf("\n");
}