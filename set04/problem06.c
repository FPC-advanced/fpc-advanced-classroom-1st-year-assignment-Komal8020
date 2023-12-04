// Write a program to count the number of words in a string using strtok (_string.h_)
#include<stdio.h>
#include<string.h>
void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);
void input_string(char *a) {
    printf("Enter the string:");
    scanf("%s", a);
}
int count_words(char *string) {
 int count = 0;
 char *token = strtok(string,"");
 while (token != NULL) {
    count++;
    token = strtok(NULL,"");
 }
 return count;
}
void output(char *string, int no_words) {
    printf("The number of words in \"%s\" is %d.\n",string,no_words);
}
int main() {
    char string[1000];
    input_string(string);
    int no_words = count_words(string);
    output(string, no_words);
    return 0;
}