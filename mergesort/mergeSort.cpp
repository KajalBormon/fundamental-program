#include<iostream>
using namespace std;

void merge(int arr[], int mid, int low, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int left[n1], right[n2];

    for(int i = 0; i < n1; i++) {
        left[i] = arr[low + i];
    }

    for(int j = 0; j < n2; j++) {
        right[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = low;

    while(i < n1 && j < n2) {
        if(left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while(i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while(j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int low, int high)
{
    if(low < high) {
        int mid = low + (high - low) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, mid, low, high);
    }
}

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main () 
{
    int arr[] = {2, 1, 3, 4, 7, 6, 8, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, n);

    mergeSort(arr, 0, n-1);

    cout << "Sorted Array: ";
    printArray(arr, n);

    return 0; 
}