#include<stdio.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);
void input(float *x1, float *y1, float *x2, float *y2) {
   printf("Enter the x-coordinate of point A :");
   scanf("%f",x1);
   printf("Enter the y-coordinate of point A : ");
   scanf("%f",y1);
   printf("Enter the x-coordinate of point B : ");
   scanf("%f",x2);
   printf("Enter the y-coordinate of point B : ");
   scanf("%f",y2);
}
float find_distance(float x1, float y1, float x2, float y2) {
   float distance = sqrt(pow(x2-x1, 2)- pow(y2-y1, 2));
   return distance;
}
void output(float *x1, float *y1, float *x2, float *y2, float distance) {
    printf("The distace between point A (%f,%f) and B(%f,%f) is %f", x1,y1, x2, y2, distance);
}
int main() {
    float x1,x2,y1, y2,distance;
    input(&x1,&x2,&y1,&y2);
    distance = find_distance(x1,y1,x2,y2);
    output(&x1,&y1,&x2,&y2,distance);
    return 0;
}