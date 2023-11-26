// Write a program to find the weight of a camel, given height, length and stomach radius using four functions.
//weight = pi * stomach_radius^3 * sqrt(height * length)
#include<stdio.h>
#include<math.h>
#include<Windows.h>
#define PI 3.14159
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);
void input_camel_details(float *radius, float *height, float *length) {
    printf("Enter the radius:");
    scanf("%f",radius);
    printf("Enter the height:");
    scanf("%f",height);
    printf("Enter the length:");
    scanf("%f",length);
}
float find_weight(float radius, float height, float length) {
    float weight; 
    return PI * pow(radius,3) * sqrt(height * length);
}
void output(float radius, float height,float length, float weight) {
    printf("Camel Details:\n");
    printf("The weight %f of camel for given %f height,%f radius and %f length",weight,height,radius,length);
}
int main() {
    float radius,height,length,weight;
    input_camel_details(&radius,&height,&length);
    weight = find_weight(radius,height,length);
    output(radius,height,length,weight);
    return 0;
}