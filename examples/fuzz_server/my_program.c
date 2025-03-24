#include <stdio.h>
#include <string.h>

// Function to be fuzzed
int myFunction(const char *input) {
    // Your code here - This is the part you want to fuzz
    // For demonstration purposes, let's just print the input
    printf("Input: %s\n", input);
    return 0;
}

int main() {
    char input[100]; // Assuming maximum input length of 100 characters

    // Read input from stdin
    scanf("%99s", input); // Limit input to 99 characters to prevent buffer overflow

    // Call the function to be fuzzed
    myFunction(input);

    return 0;
}

