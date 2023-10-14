#include<stdio.h>
int input(int *a, int *b, int *c) {
    printf("Enter the number:");
    scanf("%d %d %d",a, b,c);
}
void compare(int a,int b, int c, int *largest) {
    *largest = a;
    if(b > *largest) {
        *largest = b;
    } if (c > *largest) {
        *largest = c;
    }
    return *largest;
}
void output(int largest) {
    printf("The largest of three number is %d\n",largest);
}
int main() {
    int a,b,c,largest;
    input(&a,&b,&c);
    compare(a,b,c,&largest);
    output(largest);
    return 0;
}