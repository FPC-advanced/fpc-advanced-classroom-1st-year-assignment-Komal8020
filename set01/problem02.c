//2. Write a C program to add two numbers.
#include<stdio.h>
int main() {
    int a,b;
    printf("Enter the number:");
    scanf("%d %d",&a,&b);
    int result;
    result = a+b;
    printf("The sum of %d + %d is %d\n",a,b,result);
    return 0;
}

