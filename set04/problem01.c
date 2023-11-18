//Write a program to find sum of two fractions
#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);
void input(int *num1, int *den1, int *num2, int *den2) {
printf("Enter the numerator and denominator of fraction 1:");
scanf("%d %d",num1,den1);
printf("Enter the numerator and denominator of fraction 1:");
scanf("%d %d",num2, den2);
}
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den) {
*res_num = (num1 * den2) + (num2 * den1);
*res_den = (den1 * den2);
}
void output(int num1, int den1, int num2, int den2, int res_num, int res_den ) {
    printf("The sum of %d/%d and %d/%d is %d/%d",num1,den1, num2, den2, res_num, res_den);
}
int main() {
    int num1, num2, den1, den2, res_num, res_den;
    input(&num1, &num2, &den1, & den2);
    add(num1, num2, den1, den2, &res_den,&res_num);
    output(num1, num2, den1, den2, res_den,res_num);
    return 0;
}