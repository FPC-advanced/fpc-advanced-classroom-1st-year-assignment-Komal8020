// Write a program to find the weight of the camel given height, length and stomach radius using four functions *(Structures)*
//weight = pi * stomach_radius^3 * sqrt(height * length)
#include<stdio.h>
#include<Windows.h>
#include<math.h>
#define PI 3.14519
struct camel {
	float radius, height, length,weight;
};
typedef struct camel Camel;
Camel input(){
 Camel c;
 printf("Enter the height:");
 scanf("%f",&c.height);
 printf("Enter the length:");
 scanf("%f",&c.length);
 printf("Enter the radius:");
 scanf("%f",&c.radius);
 return c;
}
float find_weight(Camel c) {
    return PI * pow(c.radius,3) * sqrt(c.height * c.length);
}
void find_weight(Camel *c) {
    return PI * pow(c->radius,3) * sqrt(c->height * c->length);
}
void output(Camel c) {
    printf("The weight %f of camel for given %f height,%f radius and %f length",c.weight,c.height,c.radius,c.length);
}
int main() {
    Camel c;
    c = input();
    c.weight = find_weight(c);
    output(c);
    return 0;
}

