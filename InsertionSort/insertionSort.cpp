#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, j, key;
    
    for(i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while(j>=0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j + 1] = key; 
    }
}

int main()
{
    int arr[] = {9,8,1,2,4,6,3,5,7}, i;
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, n);

    cout << "Insertion Sort: ";
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}