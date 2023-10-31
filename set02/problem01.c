#include<stdio.h>
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

void input(float *base, float *height) {
    printf("Enter the base:");
    scanf("%f",base);
    printf("Enter the height:");
    scanf("%f",height);
}
void find_area(float base, float height, float *area){ 
    *area = (base * height) * 0.5;
}

void output(float base, float height, float area) {
    printf("The area of triangle having %f as height and %f as base is %f",height, base, area);
}

int main() {
    float base, height, area;
    input(&base, &height);
    find_area(base,height,&area);
    output(base, height, area);
    return 0;
}