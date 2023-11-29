/*  Write a program to find out if the name of the camel is a nice name.
 A camel has a nice name if it has at least 2 vowels and 2 consonants in it
void input(char *name);
int has_nice_name(char *c);
void output(int res);
*/
#include<stdio.h>
#include<ctype.h>
#include<Windows.h>
void input(char *name) {
    printf("Enter the name:");
    scanf("%c",name);
}
int has_nice_name(char *c) {
    int vowels = 0, consonants =0;
    for(int i = 0; c[i] != '\0'; i++) {
        char ch = tolower(c[i]);
        if(ch == 'a'|| ch == 'e'|| ch == 'i' || ch == 'o'|| ch == 'u') {
            vowels++;
        } else if ((ch >= 'a' && ch <= 'z' && !isspace(ch))) {
            consonants++;
        }
    }
    return (vowels >=2 && consonants >= 2);
}
void output(int res) {
    if (res) {
        printf("The camel has a nice name.");
    } else {
        printf("The caml does not have nice name.");
    }
}
int main() {
    char name[100];
    input(name);
    int res = has_nice_name(name);
    output(res);
    return 0;
}