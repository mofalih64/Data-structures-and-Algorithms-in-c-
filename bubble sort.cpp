#include<iostream>
#include<conio.h>
using namespace std;
void swap(int *xp, int *yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void bubble(int arr[], int n) {
	for (int j = 0;j<n-1; j++) {
		for (int i = 0; i <n-j-1; i++) {
			if (arr[i] > arr[i + 1]) {
				swap(&arr[i], &arr[i + 1]);
			}
		}
	}

}
void print(int arr[],int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void main() {
	int arr[] = { 5,6,3.1,2,9,0,7 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, n);
	print(arr, n);
	_getch();
}