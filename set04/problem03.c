 //Write a program to find the `nCr` of given n and r
void input_n_and_r(int *n, int *r) {
    printf("Enter the value for n:");
    scanf("%d", n);
    printf("Enter the value for r:");
    scanf("%d",r);
}
int nCr(int n, int r) {
    int factorial = 1;
    for(int i = 2; i <= n; i++){
        factorial = factorial * i;
       }
   return factorial;
}

void output(int n, int r, int result) {
    printf("The Combination of C(%d,%d) is %d", n,r, result);
}
int main() {
    int n, r, result;
    input_n_and_r(&n, &r);
    result = nCr(n,r);
    output(n,r,result);
    return 0;
}