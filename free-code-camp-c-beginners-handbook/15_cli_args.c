#include <stdio.h>

int main(int argc, char *argv[]) {
    for (int i=0; i < argc; i++) {
        printf("arg %d is %s\n", i, argv[i]);
    }
}