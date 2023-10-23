#include<stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
int input() {
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    return a;
}

int find_gcd(int a, int b) {
    for (int i = 0; i < a && i < b; i++) {
        if(a % i ==0 && b % i == 0) 
        return 0;
    }  return 1;
}

void output(int a, int b, int gcd) {
    printf("The gcd of %d and %d is %d\n", a, b, gcd);
}
int main() {
    int a, b,gcd;
    a = input();
    b = input();
    gcd = find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}