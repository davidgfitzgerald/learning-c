#include <stdio.h>
#include <stdlib.h>
#include "16_header_files_import.h"

int main(int argc, char* argv[]) {
    char *birth_year_char = *(argv + 1);
    const int birth_year_int = atoi(birth_year_char);
    const int age = calculateAge(birth_year_int);
    printf("You are %d years old\n", age);
};