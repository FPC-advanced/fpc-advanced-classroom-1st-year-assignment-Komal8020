#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);

int input_number() {
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    return num;
}

int is_composite(int n) {
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

void output(int n,  int result) {
    if (result > 0) {
        printf("%d is a composite number:", n);
    } else if (result < 0) {
        printf("%d is not a composite number",n);
    }
}
int main() {
    int num, result;
    num = input_number();
    result = is_composite(num);
    output(num, result);
    return 0;
}

