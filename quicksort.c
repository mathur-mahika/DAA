#include<stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
       printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b) { 
    int temp;
    temp = *b; 
    *b = *a;
    *a = temp;
}

int partition(int arr[], int low, int high) {
    int pivot;
    pivot = arr[low];
    int i = low + 1;
    int j = high;

    do {
       while (arr[i] <= pivot) {
            if(i >= high) { 
                break; 
            }
           i++;
       }

       while (arr[j] >= pivot) {
            if(j <= low) { 
                break; 
            } 
           j--;
       }

       if (i < j) {
           swap(&arr[i], &arr[j]);
       }
    } 
    while (i < j);
    
    swap(&arr[low], &arr[j]);
    return j; 
}

void quick_sort(int arr[], int low, int high) {

    int partitionIndex;

    if (low < high) {
       partitionIndex = partition(arr, low, high);
       quick_sort(arr, low, partitionIndex-1);
       quick_sort(arr, partitionIndex+1, high);
    }
}

int main() {
    
    int n = 6;
    int arr[] = {5, 2, 1, 3, 4, 6};

    printf("The array before sorting: \n");
    printArray(arr, n);

    quick_sort(arr, 0, n-1);
    printf("The sorted array: \n");
    printArray(arr, n);

    return 0;
}