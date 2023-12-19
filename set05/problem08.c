/* Write program to find the weight of a truck load of n camels.

Take inputs for:
- truck weight
- height, radius and length of n different camels
-> total_truck_weight = truck_weight + weight_of_camels
typedef struct _camel {
    float radius, height, length, weight; 
} Camel;

void input(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);*/
#include<stdio.h>
#include<math.h>
#define PI 3.14159
typedef struct _camel {
    float radius,height,length,weight;
} Camel;
void input(int n, Camel c[], float *truck_weight) {
    int i;
    for(int i = 0; i < n; i++) {
        printf("Enter the details of Camel:\n");
        printf("Radius:");
        scanf("%f", &c[i].radius);
        printf("Height:");
        scanf("%f",&c[i].height);
        printf("Length:");
        scanf("%f",&c[i].length);
    }
    printf("Enter the weight of the truck:");
    scanf("%f",truck_weight);
}
void find_camel_weight(int n, Camel c[]) {
    int i = 0;
    for(i = 0; i<n;i++) {
        return PI * pow(c[i].radius,3) * sqrt(c[i].height * c[i].length);
    }
}
float compute_total_weight(int n, Camel c[], float truck_weight) {
int i;
float total_weight = truck_weight;
  for(int i =0; i<n; i++) {
    total_weight += c[i].weight;
  }
  return total_weight;
}
void output(float total_weight){
    printf("Total weight of the truck load is %f\n",total_weight);
}
int main() {
     int n;
    float truck_weight, total_weight;
    printf("Enter the number of camels: ");
    scanf("%d", &n);
    Camel camels[10000];
    input(n, camels, &truck_weight);
    find_camel_weight(n, camels);
    total_weight = compute_total_weight(n, camels, truck_weight);
    output(total_weight);
    return 0;
}