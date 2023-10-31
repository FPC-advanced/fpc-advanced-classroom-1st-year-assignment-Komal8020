#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3) {
  printf("Enter the x-coordinates of point A:");
  scanf("%f",x1);
  printf("Enter the y-coordinates of point A:");
  scanf("%f",y1);
  printf("Enter the x-coordinates of point B:");
  scanf("%f",x2);
  printf("Enter the y-coordinates of point B:");
  scanf("%f",y2);
  printf("Enter the x-coordinates of point C:");
  scanf("%f",x3);
  printf("Enter the y-coordinates of point C:");
  scanf("%f",y3);
}
int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3) {
    
}