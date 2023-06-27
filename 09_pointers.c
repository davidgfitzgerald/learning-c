#include <stdio.h>

int main(void) {
    int age = 29;

    printf("age = %i\n", age);

    // By using the & operator we can get the memory address of a variable
    printf("&age = %p\n", &age);

    // We can assign the address to a variable
    int *address = &age;
    printf("address = %p\n", address);

    // What variable is at the address?
    printf("the variable at address is = %i\n", *address);

    // Change the variable at that address:
    *address = 100;
    printf("the variable at address is now = %i\n", *address);

    // Check what age is (it gets changed)
    printf("The age variable is now = %i\n", age);
}