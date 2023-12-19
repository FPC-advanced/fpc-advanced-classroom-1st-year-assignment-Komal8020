//8. Write a program to add n fractions
#include<stdio.h>
#include<Windows.h>
typedef struct fraction
{
    int num, den;
} Fraction;
int input_n() {
    int n;
    printf("Enter the no. of fractions:");
    scanf("%d",&n);
    return n;
}
Fraction input_fraction() {
    Fraction f;
    printf("Enter the numerator:");
    scanf("%d",&f.num);
    printf("Enter the denominator:");
    scanf("%d",&f.den);
    return f;
}
void input_n_fractions(int n, Fraction f[]) {
   for(int i = 0; i < n; i++) {
    printf("Enter the fraction:%d", i+1);
    f[i] = input_fraction();
   }
}
int find_gcd(int a, int b) {
    if (b == 0) 
        return a;
    
    return find_gcd(b, a%b);
}
Fraction add_fractions(Fraction f1, Fraction f2) {
    Fraction result;
    result.num = (f1.num * f2.den) + (f1.den * f2.num);
    result.den = (f1.den * f2.den);
    int gcd = find_gcd(result.num, result.den);
    result.num /=gcd;
    result.den /= gcd;
    return result;
}
Fraction add_n_fractions(int n, Fraction f[]) {
    Fraction sum = {0,1};
    for (int i =0; i<n; i++) {
        sum = add_fractions(sum,f[i]);
    }
     return sum;
}
void output(int n, Fraction f[], Fraction sum) {
    for(int i =0; i<n ; i++) {
        printf("%d/%d\n", f[i].num, f[i].den);
    }
    printf("Sum of Fractions is:%d/%d\n",sum.num, sum.den);
}
int main() {
    int n = input_n();
    Fraction fractions[10000];
    input_n_fractions(n, fractions);
    
    Fraction sum = add_n_fractions(n, fractions);
    
    output(n, fractions, sum);

    return 0;
}