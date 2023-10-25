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
int gcd =1;
    for (int i =0; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
 return gcd;
}
void output(int a, int b, int gcd) {
    if (gcd){
    printf("The gcd of %d and %d is %d\n", a, b, gcd);
} else {
    printf("No gcd is found for %d and %d", a,b);
}
}
int main() {
    int a, b,gcd;
    a = input();
    b = input();
    gcd = find_gcd(a,b);     
    output(a,b,gcd);
    return 0;
}