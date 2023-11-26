//Write a program to add two fractions
#include<stdio.h>
#include<Windows.h>
typedef struct {
    int num, den;
} Fraction;
void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum);
Fraction input_fraction() {
    Fraction f;
    printf("Enter the numerator:");
    scanf("%d",&f.num);
    printf("Enter the denominator:");
    scanf("%d",&f.den);
    return f;
}
int find_gcd(int a, int b) {
    int gcd;
    for (int i =1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
 return gcd;
}
Fraction add_fractions(Fraction f1,Fraction f2) {
    Fraction sum;
    sum.num = f1.num*f2.den + f2.num*f1.den;
    sum.den = f1.den*f2.den;
    return sum;
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum) {
  printf("The sum of %d/%d + %d/%d +%d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,sum.num,sum.den);
}
int main() {
    Fraction f1,f2,f3,sum;
    f1 = input_fraction();
    f2 = input_fraction();
    f3 = input_fraction();
    sum = add_fractions(f1,f2);
    output(f1,f2,f3,sum);
    return 0;

}