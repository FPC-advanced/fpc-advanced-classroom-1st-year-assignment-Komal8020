 //Write a program to find the smallest of three fractions
 #include<stdio.h>
typedef struct {
    int num, den;
} Fraction;
Fraction input() {
    Fraction f;
    printf("Enter the numerator:");
    scanf("%d",&f.num);
    printf("Enter the denominator:");
    scanf("%d",&f.den);
    return f;
}
Fraction compare(Fraction f1, Fraction f2, Fraction f3) {
    Fraction smallest;
    if (f1.num/f1.den < f2.num/f2.den) {
        smallest = f1;
    } else if (f2.num/f2.den < f3.num/f3.den) {
        smallest = f2;
    } else {
        smallest = f3;
    }
    return smallest;
}
void output(Fraction f1, Fraction f2, Fraction f3,Fraction smallest) {
    printf("The smallest of %d/%d, %d/%d and %d/%d is %d/%d",f1.num,f1.den, f2.num, f2.den, f3.num, f3.den, smallest.num, smallest.den);
}
int main() {
    Fraction f1,f2,f3, smallest;
    f1 = input();
    f2 = input();
    f3 = input();
    smallest = compare(f1,f2,f3);
    output(f1,f2,f3,smallest);
    return 0;
}