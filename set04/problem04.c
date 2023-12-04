/*Write a program to evaluate a polynomial at a given point using [Horner's Method](https://en.wikipedia.org/wiki/Horner%27s_method#:~:text=Alternatively%2C%20Horner's%20method%20also%20refers,into%20general%20use%20around%201970.)
int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);*/
#include<stdio.h>
int input_degree() {
    int degree;
    printf("Enter the degree of the polynomial:");
    scanf("%d",&degree); 
    return degree;
}
void input_coefficients(int n, float a[]) {
    printf("Enter the coefficient of the polynomial");
    for(int i = 0; i< n; i++) {
        printf("Cofficient for x^%d :",n-1-i);
        scanf("%f",&a[i]);
    }
}
float input_x() {
    float x;
    printf("Enter the value of x for which to evaluate the polynomial:");
    scanf("%f",&x);
    return x;
}
float evaluate_polynomial(int n,float a[], float x) {
    float result = a[0];
    for(int i = 1; i<n; i++) {
        result = result * x + a[i];
    }
    return result;
}
void output(int n, float a[], float x, float result) {
    printf("The polynomial");
    for (int i = 0; i <n; i++) {
        printf("%f*x^%d", a[i], n-i-1);
        if(i < n -1) {
            printf("+");
        }
    }
    printf("Evaluated at x = %f is %f\n",x,result);
}
int main() {
    int degree = input_degree();
    float coefficients[degree + 1];
    input_coefficients(degree + 1, coefficients);
    float x = input_x();
    float result = evaluate_polynomial(degree + 1, coefficients,x);
    output(100 + 1, coefficients,x,result);
    return 0;
}