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
void input_n_triangles(int n, Triangle t[]) {
    for(int i = 0; i < n; i++) {
        printf("Enter %d no. of triangle:\n", i);
        t[i] = input_triangle();
    }

}
void find_area(Triangle *t) {
    t->area = (t->altitude * t->base) * 0.5;
}
void find_n_areas(int n, Triangle t[]) {
     for(int i = 0; i < n; i++) {
     find_area(&t[i]);
  }
}
Triangle find_smallest_triangle(int n, Triangle t[]) {
    Triangle smallest = t[0];
for(int i = 1; i< n; i++) {
    if(t[i].area < smallest.area) {
        smallest = t[i];
    }
}
return smallest;
}
void output(int n, Triangle t[], Triangle smallest) {
    printf("Area of %d  triangle :\n",n);
    for(int i = 0; i < n; i++) {
     printf("Triangle no. %d Base:%f\n Altitude: %f\n Area: %f\n", i, t[i].base, t[i].altitude, t[i].area); 
     printf("Smallest Triangle:\nBase: %f\n Altitude: %f\n Area: %f\n", smallest.base, smallest.altitude, smallest.area);
    }
}
int main() {
    int n;
    n = input_n();
    Triangle t[100], smallest;
    input_n_triangles(n,t);
    find_n_areas(n,t);
    smallest = find_smallest_triangle(n,t);
    output(n,t,smallest);
    return 0;
}