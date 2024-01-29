/*1,2,6,24,120*/
#include<stdio.h>
int input_number() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    return n;
}
int is_factorial(int n) {
 int fact = 1;
  for (int i = 2; i <= n; i++) {
     if (fact *= i) {
        return fact;
     } if (n % 2 != 0) {
        return 0;
     }
  }
}
void output(int n, int fact) {
    if (fact) {
     printf("The %d is a factorial.\n",n);
    } else  {
        printf("The %d is not a factorial.\n",n);
    }
}
int main() {
    int n,result;
    n = input_number();
    result = is_factorial(n);
    output(n,result);
    return 0;
}