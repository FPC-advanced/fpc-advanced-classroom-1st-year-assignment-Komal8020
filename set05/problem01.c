//1.  Write a program to find the distance between two points.
#include<stdio.h>
#include<Windows.h>
#include<math.h>
struct _point {
  float x;
  float y;
};
typedef struct _point Point;
Point input() {
    Point p;
    printf("Enter x-coordinate:");
    scanf("%f",&p.x);
    printf("Enter y-coordinate:");
    scanf("%f",&p.y);
    return p;
}
void dist(Point a, Point b, float *res) {
    *res = sqrt(pow((b.x-a.x),2) + pow((b.y-a.y),2));
}
void output(Point a, Point b, float res) {
    printf("The distance between point a(%f,%f) and point b(%f, %f) is %f", a.x,a.y,b.x, b.y,res);
}
int main() {
    Point A, B;
    float distance;
    A = input();
    B = input();
    dist(A,B,&distance);
    output(A,B,distance);
    return 0;
}