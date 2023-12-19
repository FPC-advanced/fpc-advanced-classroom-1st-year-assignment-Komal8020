#include<stdio.h>
int input_array_size() {
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    return n;
}
int get_array_values(int n, int a[]) {
    printf("Enter the %d number of the array.\n",n);
    for (int i = 1; i <= n; i++) {
        scanf("%d",&a[i]);
    }
}
int is_factorial(int n, int a[]) {
  if (n == 1 && n % 2 == 0) {
    return 1;
  } else {
    return 0;
  }
}
int get_factorial(int n, int a[], int f[]) {
    for (int i = 0; i < n; i++) {
        f[i] = is_factorial(n,a);
    }
    return f;
}
void output(int n, int f[]) {
 printf("The factorial number in an array of number is %d",f);
}
int main() {
    int n = input_array_size();
    int a[1000];
    get_array_values(n,a);
    is_factorial(n,a);
    int f[1000];
    get_factorial(n,a,f);
    output(n,f);
    return 0;
}