#include<stdio.h>
#include<math.h>

float input() {
    float number;
    printf("Enter a number:");
    scanf("%f",&number);
    return number;

}

float square_root(float n) {
   float guess = n/2;
   float next = (guess + n/guess)/2;
   while(fabs(next-guess)>0.000001)
  { 
    guess= next;
    next=(guess+n/guess)/2 ;
  }
  return next;

}
void output(float n, float root) {
    printf("The square root of %f is %f\n",n, root);

}
int main() {
    float number = input();
    float result = square_root(number);
    output(number ,result );
    return 0;
}