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
if(n <= 1) {
    return 0;
} 
if(n == 2) {
    return 1;
}
if(n %2 == 0) {
    return 0;
}
for (int i = 3; i*i <= n; i+=2) {
    if(n % i == 0) {
        return 0;
    }
}
return 1;
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