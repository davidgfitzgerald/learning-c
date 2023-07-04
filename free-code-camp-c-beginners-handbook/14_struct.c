#include <stdio.h>

struct person {
    int age;
    char *name;
};

typedef struct {
    char *mode;
    char *material;
    int wheels;
} VEHICLE;

int main(void) {
    struct person david = { 29, "David" };
    printf("%s, age %u\n", david.name, david.age);

    VEHICLE car = { "ground", "metal", 4};
    printf("The vehicle moves in/on the %s, is made of %s and has %d wheels\n", car.mode, car.material, car.wheels);
};