//Modular Design 

#include<iostream>
using namespace std;

int findMinIndex(int arr[], int start, int n) 
{
    int j, minIndex;
    minIndex = start;
    for(j = start + 1; j < n; j++) {
        if(arr[j] < arr[minIndex]) {
            minIndex = j;
        }
    } 
    return minIndex;
}

void selectionSort(int arr[], int n) 
{
    int i, temp, minIndex;
    for(i = 0; i < n-1; i++) {
        minIndex = findMinIndex(arr, i, n);
        if(minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main()
{
    int arr[] = {10,20,30,5,2};
    int i, n;
    n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, n);

    cout << "Selection Sorted array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}