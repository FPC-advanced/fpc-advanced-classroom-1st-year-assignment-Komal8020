#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int input_array_size() {
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    return n;
}

void input_array(int n, int a[n]) {
  for(int i = 0; i <= n; i++){
    printf("Enter the %d element of array:",i+1);
    scanf("%d",&a[i]);
  }
}
int is_composite(int n){
    for(int i = 2; i<= 2*n; i++){
   if (n%i == 0) {
        return 1;
   }
}
for(int j = 2; j <= 3*n; j++){
    if (n%j == 0){
        return 1;
    } 
}
    return -1;
}
int sum_composite_numbers(int n, int a[n]) {
    int sum = 0;
    for(int i = 0; i<= n; i++) {
        if(is_composite(a[i]) == 1) 
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
    int a[n];
    input_array(n,a);
    is_composite(n);
    sum = sum_composite_numbers(n,a);
    output(sum);
    return 0;

}