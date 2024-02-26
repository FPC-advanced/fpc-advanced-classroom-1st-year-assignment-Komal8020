/*1,2,6,24,120*/
/*1! = 1 = 1
2! = 2 * 1 = 2
3! = 3*2*1 = 6
4! = 4*3*2*1 = 24
*/
#include<stdio.h>
int input_number() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    return n;
}
int is_factorial(int n) {
    int fact = 1;
    int i=1;
    while (fact < n) {
      i++;
      fact *= i;
    }   
    if (fact == n) {
        return 1;
    } else {
        return 0;
    }
}
void output(int n) {
 if (is_factorial(n)) {  //is_factorial(n) function checks that the number is factorial or not.
    printf("%d is a factorial.\n",n);
 } else {
    printf("%d is not a factorial.\n",n);
 }
}
int main() {
    int n,result;
    n = input_number();
    is_factorial(n);
    output(n);
    return 0;
}