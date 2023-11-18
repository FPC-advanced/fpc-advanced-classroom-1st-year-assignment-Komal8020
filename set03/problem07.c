//Write a program to find the length of a line
#include<stdio.h>
#include<math.h>
typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);
Point input_point() {
    Point p;
    printf("Enter x and y coordinates:\n");
    scanf("%f %f",&p.x, &p.y);
    return p;
}
Line input_line() {
    Line l;
    printf("Enter the coordinates for p1:\n");
    scanf("%f %f",&l.p1.x, &l.p1.y);
    printf("Enter the coordinates for p2:\n");
    scanf("%f %f",&l.p2.x, &l.p2.y);
    return l;
}
void find_length(Line *l) {
    l->distance = sqrt(pow((l->p2.x - l->p1.x),2) + pow((l->p2.y - l->p1.y),2));
}
void output(Line l) {
  printf("Coordinates of p1:(%f,%f)\n",l.p1.x, l.p1.y);
  printf("Coordinates of p2:(%f,%f)\n",l.p2.x, l.p2.y);
  printf("Length of a line is:%f\n",l.distance);
}
int main() {
    Line l = input_line();
    find_length(&l);
    output(l);
    return 0;
}