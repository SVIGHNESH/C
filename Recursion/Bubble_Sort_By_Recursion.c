#include <stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void sortArray(int arr[], int n) {
    
    if (n == 0 || n == 1) { //base case 
        return; 
    }

    
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(&arr[i], &arr[i + 1]);
        }
    }
   
    sortArray(arr, n - 1); //Tail Recursion 

}

int main() {
    int arr[5] = {2, 5, 1, 60, 9};

    printf("Unsorted Array:");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }printf("\n");

    sortArray(arr, 5);
    printf("Sorted Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
