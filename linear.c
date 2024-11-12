#include <stdio.h>

int main() {

    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int a;
    printf("Enter Number to search: ");
    scanf("%d", &a);

    int flag = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == a) {
            printf("Number found in array.");
            flag++;
        }
    }

    if(flag == 0) {
        printf("Element does not exist in array.");
    }

    return 0;
}