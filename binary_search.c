/* Doing a binary search */
#include <stdio.h>

#define NOT_FOUND -1

int binary_search(int arr[], int first, int last, int num);
int simple_search(int arr[], int last, int num);

int main(void) {

    int my_arr[] = {1, 3, 4, 5, 6, 10, 12};
    int size = sizeof(my_arr)/ sizeof(my_arr[0]);

    printf("6 is present at index: %d.\n", binary_search(my_arr, 0, size-1, 6));
    return 0;
}

int binary_search(int arr[], int first, int last, int num) {
    while (first <= last) {
        int mid = (first + last) / 2;

        if (arr[mid] == num) {
            return mid;
        }
        if (arr[mid] < num) {
            first = mid + 1;
        } else {
            last = mid - 1;
        }
    }
    return NOT_FOUND;
}

int simple_search(int arr[], int last, int num) {
    // Go through every element in the array until I find num
    for(int i = 0; i <= last; i++) {
        if (arr[i] == num) {
            return i;
        }
    }

    return NOT_FOUND;
}
