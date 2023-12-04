/*Write a program to find borga(x) given x.

> The formula for finding borga(x) is `1 + (x^1)/3! + (x^2)/5! + (x^3)/7! + ...`. Stop when the next term is less 0.000001 using four functions.

```c
int input(int x);
float borga_X(int x);
void output(int x, float result);*/
#include<stdio.h>
int input() {
    int x;
 printf("Enter the value of x:");
 scanf("%d", &x);
 return x;
} 
float borga_x(int x) {
 float result = 1.0;
 float term = x;
 for (int i = 1; term > 0.000001; i++) {
    term *= (float)x/((2*i + 1)*(2*i+2));
    result += term;
 }
 return result;
}
void output(int x, float result) {
    printf("Borga(%d) is approximately:%f\n",x,result);
}
int main() {
    int x = input();
    float result = borga_x(x);
    output(x,result);
    return 0;
}