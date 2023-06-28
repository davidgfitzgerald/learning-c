#include <stdio.h>

int main(void) {
    int prices[3] = { 5, 4, 3 };

    // The prices variable is actually a pointer to the first item of the array
    printf("First price is %i\n", *prices);

    // We can increment prices to point to the next items in the array
    printf("Second price is %i\n", *(prices+1));
    printf("Third price is %i\n", *(prices+2));

    // The behaviour pointing after the array is undefined
    printf("??? price is %i\n", *(prices+3));  // ??? price is 1
    printf("??? price is %i\n", *(prices+4));  // ??? price is -1123811316
}