#include<stdio.h>
int input_array_size() {
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    return n;
}
int get_array_values(int n, int a[]) {
    printf("Enter the %d number in the array.\n",n);
    for (int i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
}
int is_factorial(int n) {
    int fact = 1;
    int i=1;
    while (fact < n) {
      i++;
      fact *= i;
    }   
  return fact;
  if(fact == n) {
    return n;
  } else {
    return 0;
  }
}
void get_factorial(int n, int a[], int f[]) {
    for(int i = 0; i < n; i++) {
      f[i] = is_factorial(a[i]);
    }  
}   

void output(int n, int f[]) {
   printf("Factorials present in array:\n");
   for (int i = 0; i < n; i++) {
     if (f[i] != 0) {
      printf("%d\n",f[i]);
    }
  }
}
int main() {
    int n = input_array_size();
    int a[n];
    get_array_values(n,a);
    int f[n];
    get_factorial(n,a,f);
    output(n,f);
    return 0;
}