#include <stdio.h>

int main(void) {
    char name[6] = { 'D', 'a', 'v', 'i', 'd' };
    printf("My name is ");

    int size = sizeof(name) / sizeof(name[0]);
    for (int i=0; i < size; i++) {
        printf("%c", name[i]);
    }
    printf("\n");

    char greeting[10] = "What's up";
    printf("%s\n", greeting);
}