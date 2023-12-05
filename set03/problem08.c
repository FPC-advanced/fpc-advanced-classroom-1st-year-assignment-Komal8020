// Write a program to find the perimeter of a polygon.
#include<stdio.h>
#include<math.h>
typedef struct point {
    float x,y;
} Point;
typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;
int input_n();
Point input_point(char *prompt_msg);
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon* p);
void output(Polygon p);
int input_n() {
    int  n;
    printf("Enter the number of sides of polygon:");
    scanf("%d",n);
    return n;
}
Point input_point(char *prompt_msg) {
 Point p;
 printf("%s",prompt_msg);
 scanf("%f %f", &p.x, &p.y);
 return p;
}
int input_polygon(Polygon *p) {
  int i;
  p->sides = input_n();
  for(i = 0; i < p->sides; i++) {
    p->p[i] = input_point("Enter vertex (x,y):");
  }
}
float find_distance(Point a, Point b) {
 return sqrt(pow(b.x - a.x,2) + pow(b.y - a.y,2));
}
void find_perimeter(Polygon* p) {
p->perimeter = 0;
for(int i = 0; i < p->sides; i++) {
    int next_index = (i+1) % p->sides;
    p->perimeter += find_distance(p->p[i], p->p[next_index]);
}
}
void output(Polygon p) {
printf("Perimeter of the polygon is: %f\n",p.perimeter);
}
int main() {
    Polygon p;
    p.sides = input_n();
    if (input_polygon(&p)) {
        find_perimeter(&p);
        output(p);
    } else {
        printf("Invalid input for polygon points.\n");
    }
    return 0;
}