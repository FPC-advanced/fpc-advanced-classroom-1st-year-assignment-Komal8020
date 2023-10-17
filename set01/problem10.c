#include<stdio.h>
#include<string.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

void input_two_strings(char *string1, char *string2) {
    printf("Enter two strings:");
    scanf("%s %s", string1, string2);
}
int stringcompare(char *string1, char *string2) {
    for(int i = 0; string1[i] != '\0' && string2[i] != '\0';i++) {
    if(string1[i]>string2[i])
      return 1;
    if(string1[i] < string2[i])
      return -1;
    }
    return 0;
}
void output(char *string1, char *string2, int result) {
    for(int i = 0;string1[i] != '\0' && string2[i] != '\0';i++) {
        if(result > 0) {
        printf("%s is greater",string1);}
        else if(result < 0) {
        printf("%s is greater", string2);}
        else {
        printf("Both are equal");
    }
}
}
int main() {
    char string1, string2;
    int result;
    input_two_strings(string1,string2);
    result = stringcompare(string1, string2);
    output(string1, string2,result);
    return 0;
}