#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);

int input_number() {
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    return num;
}

int is_composite(int n) {
for (int i = 2; i <= n/2; i++) {
    if( n % i == 0) {
        return 1;
    } 
} 
    return 0;   
}
void output(int n,  int result) {
    if (result == 1) {
        printf("%d is a composite number", n);
    } else {
        printf("%d is not a composite number",n);
    }
}
int main() {
    int num, result;
    num = input_number();
    result = is_composite(num);
    output(num, result);
    return 0;
}