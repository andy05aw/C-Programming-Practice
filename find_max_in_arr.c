#include <stdio.h>
#include <math.h>

// Great refresher of basic pointers and pass by address practice problem. I forgot the syntax
// for pointers when being declared and defined. Also, what code is used to get values of what
// a variable is pointing to (vs getting its address)

int* find_max(int *arr, int size) {
    int *max_ptr = arr;

    //printf("max_ptr = %d", *max_ptr);
    for (int i=1; i < size; i++) {
        if (*(arr + i) > *max_ptr) {
            max_ptr = arr + i;
        }

    }

    return  max_ptr;
}

int main () {

    int arr[] = {10, 20, 30, 40, 50, 60};
    int *max = find_max(arr, 6);

    printf("max = %d\n", *max);

    return 0;
}
