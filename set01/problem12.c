#include<stdio.h>
struct _complex {
	float real;
    float imaginary;
};
typedef struct _complex Complex;
int get_n() {
    int n;
    printf("Enter the size of complex:");
    scanf("%d",&n);
    return n;
}
void input_n_complex(int n,Complex c[]) {
    printf("Enter %d values for the array:\n", n);
    for (int i = 0; i < n; i++) {
     printf("\nEnter the real and imaginary part of %d complex number:",i+1);
    scanf("%f %f", &c[i].real,&c[i].imaginary);
    }
}
Complex add(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}
Complex add_n_complex(int n, Complex c[]) {
    Complex sum;
    sum.real = 0;
    sum.imaginary = 0;
    
    for (int i = 0; i < n; i++) {
        sum.real += c[i].real;
        sum.imaginary += c[i].imaginary;
    }
    return sum;
}
void output(int n, Complex result) {
    printf("The sum of %d of complex number is %f + %fi\n",n,result.real, result.imaginary);
}
int main() {
    int n = get_n();
    Complex c[1000];
    Complex a,b;
    input_n_complex(n,c);
    add(a,b);
    Complex result = add_n_complex(n,c);
    output(n,result);
    return 0;
}

