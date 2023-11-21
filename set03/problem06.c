//Write a program to find the index of a substring of a string
#include<stdio.h>
void input_string(char *a, char *b) {
    printf("Enter the string a:");
    scanf("%s",a);
    printf("Enter the string b:");
    scanf("%s",b);
}
int sub_str_index(char  *string, char *substring) {
  int len_string = strlen(string);
  int len_substring = strlen(substring);
  for (int i = 0; i<= len_string-len_substring; i++){
    int j;
    for(j = 0; i<= len_substring;j++) {
        if(string[i+j] != substring[j]) {
            break;
        }
    }
    if(j==len_substring) {
        return i;
    }
  }
  return -1;
}
void output(char *string, char *substring, int index) {
    if(index != -1) {
    printf("Sustring '%s' found in the main string '%s' at index %d.\n ",substring, string,index);
    } else {
        printf("Substring %s is not found in the main string.",substring);
    }
}
int main() {
    char *a, *b, *string, *substring;
    int index;
    input_string(&a, &b);
    sub_str_index(&string,&substring);
    output(&string, &substring, index);
    return 0;
}