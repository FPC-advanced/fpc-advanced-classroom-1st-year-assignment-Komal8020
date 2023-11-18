//Write a program to find the index of a substring of a string
#include<stdio.h>
void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);
void input_string(char* a, char* b) {
    printf("Enter the string a:");
    scanf("%s",a);
    printf("Enter the string b:");
    scanf("%s",b);
}
int sub_str_index(char* string, char* substring) {
     for (int i = 0; i <= *string; i++) {
       
     }
}
void output(char *string, char *substring, int index) {
    printf("Enter the index of the string:%d",index);
    printf("The string is %s\n",string);
    printf("The substring of the string is %s\n",substring);
}
int main() {
    char *a, *b, *string, *substring;
    int index;
    input_string(&a, &b);
    sub_str_index(&string,&substring);
    output(&string, &substring, index);
    return 0;
}