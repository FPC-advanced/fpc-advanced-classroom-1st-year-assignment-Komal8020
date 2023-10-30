 //Write a program to find the triangle with smallest area in n given triangles.
#include<stdio.h>
typedef struct _triangle {
	float base;
    float altitude;
    float area;
} Triangle;
int input_n() {
    int n;
    printf("Enter the number of triangle:");
    scanf("%d",&n);
    return n;
}
Triangle input_triangle() {
    Triangle t;
    printf("Enter the base:");
    scanf("%f",&t.base);

    printf("Enter the altitude:");
    scanf("%f",&t.altitude);
    return t;
}
void input_n_triangles(int n, Triangle t[n]) {
    for(int i = 0; i <= n; i++) {
        printf("Input %d no. of triangle:", i+1);
        scanf("%f",t[i]);
    }
}
void find_area(Triangle *t) {
    t->area = (t->altitude * t->base) * 0.5;
}
void find_n_areas(int n, Triangle t[n]) {
     for(int i = 0; i <= n; i++) {
     find_area(&t[i]);
  }
}
Triangle find_smallest_triangle(int n, Triangle t[n]) {
    Triangle smallest = t[0];
for(int i = 1; i<= n; i++) {
    if(t[i].area < smallest.area) {
        smallest = t[i];
    }
}
return smallest;
}
void output(int n, Triangle t[n], Triangle smallest) {
    printf("Details of the triangle:\n");
    for(int i = 0; i <= n; i++) {
        printf("Triangle %d: Base = %f, Altitude = %f, Area = %f\n", i+1,t[i].base, t[i].altitude,t[i].area);
        printf("Triangle with smallest area : Base = %f, Altitude = %f, Area = %f\n", smallest.base, smallest.altitude,smallest.area);
    }
}
int main() {
    int n;
    n = input_n();
    Triangle t[n], smallest;
    find_n_areas(n,t);
    smallest = find_smallest_triangle(n,t);
    output(n,t,smallest);
    return 0;
}