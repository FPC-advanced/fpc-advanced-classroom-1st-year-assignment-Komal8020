#include<stdio.h>
int input_number();
int is_prime(int n);
void output(int n, int result);
int input_number() {
    int n; 
    printf("Enter the number:");
    scanf("%d",&n);
    return n;
}
int is_prime(int n) {
    for (int i = 2; i <= n; i++) {
        if (n%i == 0) {
            return 1;
        } else {
            return 0;
        }
    }
}
void output(int n, int result) {
    if (result == 1) {
        printf("%d is a prime number",n);
    } else if (result == 0) {
        printf("%d is not a prime number",n);
    }
}
int main() {
    int n, result;
    n = input_number();
    result = is_prime(n);
    output(n,result);
    return 0;
}