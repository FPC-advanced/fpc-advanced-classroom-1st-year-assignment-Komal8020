#include<stdio.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
void input_string(char *a) {
  printf("Enter the string:");
  scanf("%s",a);
}

void str_reverse(char *str, char *rev_str) {
  int len = strlen(str);
  for(int i = 0; i<len/2; i++) {
    char b = str[i];
    str[i] = str[len -1-i];
    str[len-1-i] = b;
  }
}

void output(char *a, char *reverse_a) {
  printf("The reverse of string is %s\n",reverse_a);
}
int main() {
  char a[100];
  char rev_str[100];
  input_string(a);
  str_reverse(a, rev_str);
  output(a, rev_str);
  return 0;
}