 /*Write a program to find out the mood of a Camel.

Camel is:
 - sick when its `stomach_radius` is less than `height` and less than `length`
 - happy when its `height` is less than `length` and less than `stomach_radius`.
 - tense when its `length` is less than `height` and `stomach_radius`.*/
#include<stdio.h>
#include<Windows.h>
void input_camel_details(float *radius, float *height, float *length){
    printf("Enter the radius:");
    scanf("%f",radius);
    printf("Enter the height:");
    scanf("%f",height);
    printf("Enter the length:");
    scanf("%f",length);
}
int find_mood(float radius, float height, float length){
    if(radius < height && radius < length) {
        return 1;
    } else if (height < length && height < radius) {
        return -1;
    } else if (length < height && length < radius) {
        return 2;
    } else {
        return 0;
    }
}
void output(float radius, float height, float length, int mood) {
    if(mood == 1){
        printf("The camel is sick");
    } else if (mood == -1) {
        printf("The Camel is happy");
    } else if (mood == 2) {
        printf("The Camel is tense");
    } else {
        printf("Not determine");
    }
}
int main() {
    float radius,length,height;
    int mood;
    input_camel_details(&radius,&height,&length);
    mood = find_mood(radius,height,length);
    output(radius,height,length,mood);
    return 0;
}