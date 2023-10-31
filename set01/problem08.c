#include <stdio.h>
int get_array_size() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    return size;
}

void get_array_values(int n, int a[]) {
    printf("Enter %d values for the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}


int find_sum_array(int n, int a[], int sum) {
    sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum; 
}


void output(int sum) {
    printf("Sum of array elements: %d\n", sum);
}
int main() {
    int size = get_array_size();
    int array[100];
    get_array_values(size, array);
    int sum = find_sum_array(size, array, sum);
    output(sum);
    return 0;
}
