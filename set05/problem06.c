/*6.  Write a program to find the average of all the odd elements in an array
int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);*/
#include<stdio.h>
#include<Windows.h>
int input_n(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",n);
    return n;
}
void input(int n, int a[]) {
     printf("Enter the element of the array:\n");
    for (int i = 0; i< n; i++) {
       printf("Element %d",i);
       scanf("%d", &a[i]);
    }
}
float odd_average(int n, int a[]) {
   int sum = 0;
   for (int i = 0; i <n; i++) {
    if(a[i] % 2 != 0) {
        sum += a[i];
    }
   }
   return sum;
}
void output(float avg) {
    printf("The average of odd numbers is %f\n",avg);
}
int main() {
   int n = input_n();
   int a[10000];
   input(n,a);
   float avg = odd_average(n,a);
   output(avg);
   return 0;
}