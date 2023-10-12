#include<stdio.h>
int input() {
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
}
int Add(int a, int b) {
    int sum;
    sum = a+b;
   
} 
void output(int a, int b, int sum) {
    printf("The sum of %d + %d is %d\n",a,b,sum);
}
int main() {
    int a, b, sum;
    a = input();
    b = input();
    sum = Add(a,b);
    output(a,b,sum);
    return 0;
}