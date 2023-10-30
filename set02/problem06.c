#include <stdio.h>
#include <string.h>

// Function to input a string
void input_string(char *a) {
    printf("Enter a string: ");
    scanf("%s", a);
}

// Function to reverse a string
void str_reverse(char *str, char *rev_str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        rev_str[i] = str[len - i - 1];
    }
    rev_str[len] = '\0'; // Null-terminate the reversed string
}

// Function to output a string
void output(char *a, char *reverse_a) {
    printf("Original string: %s\n", a);
    printf("Reversed string: %s\n", reverse_a);
}

int main() {
    char input[100];
    char reversed[100];

    input_string(input);
    str_reverse(input, reversed);
    output(input, reversed);

    return 0;
}
