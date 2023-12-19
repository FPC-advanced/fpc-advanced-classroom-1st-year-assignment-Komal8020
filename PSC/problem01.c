/*1,2,6,24,120*/
#include<stdio.h>
int input_number() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    return n;
}
int is_factorial(int n) {
 if (n == 1) {
    return 1;
 }
if  (n % 2 == 0) {
 return 1;
} else  {
   return -1;
}
}
void output(int n, int result) {
    if (result > 0) {
     printf("The %d is a factorial.\n",n);
    } else if (result < 0) {
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