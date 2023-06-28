#include <stdio.h>

typedef enum {
    NORTH,
    EAST,
    SOUTH,
    WEST,
} CARDINAL_DIRECTION;

int main(void) {
    CARDINAL_DIRECTION dir = NORTH;

    printf("Heading %d\n", dir);
}