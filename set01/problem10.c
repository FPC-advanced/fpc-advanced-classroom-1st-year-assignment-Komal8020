#include <stdio.h>

void inputStrings(char *string1, char *string2);
int compareStrings(char *string1, char *string2);
void outputResult(char *string1, char *string2, int result);

int main() {
    char string1[100];
    char string2[100];

    inputStrings(string1, string2);
    int result = compareStrings(string1, string2);
    outputResult(string1, string2, result);

    return 0;
}

void inputStrings(char *string1, char *string2) {
    printf("Enter the first string: ");
    scanf("%s", string1);

    printf("Enter the second string: ");
    scanf("%s", string2);
}

int compareStrings(char *string1, char *string2) {
    int i = 0;
    while (string1[i] == string2[i]) {
        if (string1[i] == '\0')
            return 0;
        i++;
    }
    return string1[i] - string2[i];
}

void outputResult(char *string1, char *string2, int result) {
    printf("Comparison Result:\n");
    printf("String 1: %s\n", string1);
    printf("String 2: %s\n", string2);

    if (result < 0)
        printf("String 1 is less than String 2\n");
    else if (result > 0)
        printf("String 1 is greater than String 2\n");
    else
        printf("String 1 is equal to String 2\n");
}


