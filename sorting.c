#include <stdio.h>

// Function for Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function for Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        // Swap arr[i] and arr[minIndex]
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Bubble Sort
    printf("Array before Bubble Sort: ");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("Array after Bubble Sort: ");
    printArray(arr, n);

    // Reset array for Selection Sort
    int arr2[] = {64, 25, 12, 22, 11};
    
    // Selection Sort
    printf("Array before Selection Sort: ");
    printArray(arr2, n);
    selectionSort(arr2, n);
    printf("Array after Selection Sort: ");
    printArray(arr2, n);

    return 0;
}
https://onecompiler.com/c/42v9ftk2n
