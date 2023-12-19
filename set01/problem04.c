#include<stdio.h>
void input(int *a, int *b) {
    printf("Enter the number:");
    scanf("%d %d", a,b);
}
void Add(int a, int b, int *sum) {
  *sum = a +b;
}

void output(int sum) {
    printf("The sum is %d\n",sum);
}

int main() {
    int a,b,sum;
    input(&a, &b);
    Add(a,b,&sum);
    output(sum);
    return 0;
}