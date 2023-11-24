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
    
    for(int i =0; i<= n; i++) {
       printf("Enter the %d element of the array:",i+1);
        scanf("%d",&a[i]);
    }
}
int find_largest_index(int n, int a[]) {
    int index;
  for( int i = 0; i <n; i++) {
    if (index < a[i])
    index = a[i];
  }
  return index;
}
void output(int index) {
    printf("The index of the largest number in an array:", index);
} 
int main() {
    int n = input_size();
    int array[n];
    input_array(n,array);
    int largestindex= find_largest_index(n,array);
    output(largestindex);
    return 0;
}