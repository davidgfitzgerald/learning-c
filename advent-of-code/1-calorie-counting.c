#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


long fsize(FILE *fptr) {
    long size;
    fseek(fptr, 0, SEEK_END);  // Move the file pointer to the end of the file
    size = ftell(fptr);        // Get the current position of the file pointer
    rewind(fptr);              // Reset the file pointer to the beginning of the file
    return size;
}


int main(int argc, char* argv[]) {
    // Parse args
    if (argc - 1 != 1) {
        printf("You must provide only one arg (filename). You provided %d args\n", argc - 1);
        return 1;
    }

    // Name the first argument filename
    char *filename = *(argv + 1);
    printf("Filename you passed in is %s\n", filename);

    // Declare a pointer to the file
    FILE *fptr;

    // Open file in read mode
    fptr = fopen(filename, "r");

    // Handle errors opening the file
    if (fptr == NULL) {
        printf("Error opening file %s: %s\n", filename, strerror(errno));
        return 1;
    };

    // Calculate the size of the file
    long size = fsize(fptr);
    printf("%s is %ld bytes big\n", filename, size);


    // Create a variable big enough to store the entire file
    int numbers[size];

    // Create a variable big enough to store the sum of each elves calories
    int all_calories[size];

    // Variable to store each line of the file
    char line[6];

    // Create a counter for the current elves calories
    int current_calorie_count = 0;

    // Pointer to store the address of the first invalid character
    char *endptr;  

    // The line number of the file
    int line_no = 0;

    // The number of the current elf
    int elf_no = 0;

    // Store the max calories found
    int max_calories = 0;

    // Read each line from the file
    while(fgets(line, size, fptr)) {
        // Get the current line length
        long line_length = strlen(line);

        // Parse the calories on each line
        long calories = strtol(line, &endptr, 10);

        // If the last character is a newline, simply make it a null terminator
        if (*endptr == '\n') {
            *endptr = '\0';
        };

        // Error if a line does not end with a null terminator
        if (*endptr != '\0') {
            printf("Conversion failed. Invalid character: '%c'\n", *endptr);
            return 1;
        };

        // If the line length is 1, the only character is \n and so we
        // reset to a new elf calorie counter.
        if (line_length == 1) {
            all_calories[elf_no] = current_calorie_count;
            if (current_calorie_count > max_calories) {
                max_calories = current_calorie_count;
            };
            current_calorie_count = 0;
        } else {
            current_calorie_count += calories;
        };

        // Save the number
        numbers[line_no] = calories;

        // Move to the next line in the file
        line_no++;
    };

    // Print the max calories found
    printf("Max calories: %d\n", max_calories);

    // Close the file
    fclose(fptr);

    // Success!
    return 0;
}