//2. Write a C program to add two numbers.
#include<stdio.h>

int input() {
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    return a;
} 

int sum(int a, int b) {
    int c;
    c = a+b;
    return c;
}
int result(int a, int b, int c) {
    printf("the sum of %d + %d is %d\n", a,b,c);
}


int main() {
    int a,b,c;
    a = input();
    b = input();
    c = sum(a,b);
   result(a,b,c);

    return 0;
}
