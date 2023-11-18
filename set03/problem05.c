// Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.
#include<stdio.h>
int input_array_size();
void init_array(int n, int a[]);
void erotosthenes_sieve(int n, int a[]);
void output(int n, int a[]);

int input_array_size() {
  int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    return n;
}
void init_array(int n, int a[]) {
    for(int i = 2; i <= n;i++) {
      a[i] = 1;
    }
}
void eratosthenes_sieve(int n, int a[]) {
    for (int i = 2; i*i <= n; i++) {
        if(n % i == 0) {

        }
    }
}   
