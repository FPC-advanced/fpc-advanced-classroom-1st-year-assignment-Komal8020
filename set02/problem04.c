#include<stdio.h>
int input_array_size() {
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    return n;
}

void input_array(int n, int a[]) {
  for(int i = 0; i < n; i++){
    printf("Enter the %d element of array:",i+1);
    scanf("%d",&a[i]);
  }
}
int is_composite(int n){
    for(int i = 2; i<= n/2;i++){
   if (n % i == 0) {
        return 1;
   }
}
   return 0;
}
int sum_composite_numbers(int n, int a[]) {
    int sum = 0;
    for(int i = 0; i< n; i++) {
        if(is_composite(a[i])) 
            sum += a[i];
    }
    return sum;
}
void output(int sum) {
    printf("The sum of composite number is %d",sum);
}
int main() {
    int n, sum;
    n = input_array_size();
    int a[100];
    input_array(n,a);
    is_composite(n);
    sum = sum_composite_numbers(n,a);
    output(sum);
    return 0;

}