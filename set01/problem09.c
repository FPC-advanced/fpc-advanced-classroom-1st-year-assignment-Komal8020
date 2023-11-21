#include<stdio.h>
#include<math.h>

float input() {
    float number;
    printf("Enter a number:");
    scanf("%f",&number);
    return number;

}

float mysqrt(float x) {
   float guess = x/2;
   float next = (guess + x/guess)/2;
   while(fabs(next-guess)>0.000001)
  { 
    guess= next;
    next=(guess+x/guess)/2 ;
  }
  return next;

}
void output(float x, float root) {
    printf("The square root of %f is %f\n",x, root);

}
int main() {
    float number = input();
    float result = mysqrt(number);
    output(number ,result );
    return 0;
}