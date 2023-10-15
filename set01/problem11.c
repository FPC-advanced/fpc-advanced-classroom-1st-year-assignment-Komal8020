#include <stdio.h>
struct Complex {
    float real;
    float imaginary;
};
typedef struct Complex complex;

complex inputComplex() {
    complex num;
   printf("Enter the real and imaginary parts of the complex number:");
   scanf("%f %f", &num.real, &num.imaginary);
   return num;
}

complex addComplex(complex num1,complex num2) {
    complex sum;
    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;
    return sum;
}

void displayComplex(complex num) {
    printf("Sum = %.2f +%.2fi\n",num.real, num.imaginary);
}
int main() {
    complex num1, num2, sum;
    num1 = inputComplex();
    num2 = inputComplex();
    sum = addComplex(num1,num2);
    displayComplex(sum);
    return 0;
}
