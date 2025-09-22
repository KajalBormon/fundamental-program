#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for(i = 0; i< n - 1; i++) {
        for(j = 0; j < n - i -1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int i, n;
    int arr[] = {9,5,4,8,6,7,3,1,2};
    n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Bubble Sort: ";
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}