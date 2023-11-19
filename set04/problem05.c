//Write a program to find the index of the largest number in an array
#include<stdio.h>
int input_size();
void input_array(int n, int a[]);
int find_largest_index(int n, int a[]);
void output(int index);

int input_size() {
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[]) {
    printf("Enter the element of the array:");
    for(int i =0; i<= n; i++) {
        printf("Elements:%d",i+1);
        scanf("%d",&a[i]);
    }
}
int find_largest_index(int n, int a[]) {

}