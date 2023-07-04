#include <stdio.h>
#include <string.h>

void doSomething(int value) {
    printf("%d\n", value);
}

const char* greet(const char *name) {
    static char greeting[100];
    strcpy(greeting, "Hello, ");
    strcat(greeting, name);
    strcat(greeting, "\n");
    return greeting;
}

int main(void) {
    doSomething(69);
    const char* greeting = greet("David");
    printf("%s", greeting);
}