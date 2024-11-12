#include <stdio.h>

void bubbleSort(int a[], int l) {
	int i, j, temp;

	for(i = 0; i < (l - 1); i++) {
		for(j = 0; j < (l - 1 - i); j++) {
			if(a[j] > a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}	
}

int BS(int a[], int l, int h, int k) {
    bubbleSort(a, l);

	int mid = (l+h)/2;
	if(l<=h) {
		if(a[mid] == k) {
			return a[mid];
		}
		if(a[mid] > k) {
			return BS(a, l, mid-1, k);
		}
		return BS(a, mid+1, h, k);
	}
	return -1;
}

int main() {
	int arr[5] = {7, 1, 21, 12, 17}, low = 1, high = 5, key = 17, ans;
	
	ans = BS(arr, low, high, key);

    if(ans == -1) {
        printf("key not found");
    }
	else {
        printf("key found");
    }
	
	return 0;
}