#include<stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
Triangle input_triangle() {
 Triangle triangle;
    printf("Enter the base:");
    scanf("%f",&triangle.base);

    printf("Enter the altitude:");
    scanf("%f",&triangle.altitude);
  return triangle;
}

void find_area(Triangle *t) {
    float area;
    t->area = (t->base * t->altitude)*0.5;
}
void output(Triangle t) {
    printf("The area of triangle is %f",t.area);
}
int main() {
    float base, altitude, area;
    Triangle t = input_triangle();
    find_area(&t);
    output(t);
    return 0;
}