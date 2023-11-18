// Write a program to find nth number in fibonacci sequence.
//Fibonacci Sequence is of the form: `0, 1, 1, 2, 3, 5, 8, 13, ...`
#include<stdio.h>
int input() {
    int n;
    printf("Enter the nth number:");
    scanf("%d",&n);
    return n;
}
int find_fibo(int n) {
    if(n ==0) {
        return 0;
    } if (n==1) {
        return 1;
    }
int n1 = 0; int n2= 1;
int fibo;
for(int i =2; i <= n; i++) {
    fibo = n1 + n2;
    n1 = n2;
    n2 = fibo;
}
return fibo;
}
void output(int n, int fibo) {
        printf("The %dth number in fibonacci sequence is %d",n,fibo);

}
int main() {
    int n, fibo;
    n = input();
    fibo = find_fibo(n);
    output(n,fibo);
    return 0;
}
