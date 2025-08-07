#include <iostream>
using namespace std;

int parition(int arr[], int si, int ei)
{

    int i = si - 1;
    int pivot = arr[ei];

    for (int j = si; j < ei; j++)
    {
        if (arr[j] >= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    i++;
    swap(arr[i], arr[ei]);
    return i;
}

void quickSort(int arr[], int si, int ei)
{

    // base case
    if (si >= ei)
    {
        return;
    }

    int pivotIdx = parition(arr, si, ei);
    quickSort(arr,si,pivotIdx-1);
    quickSort(arr,pivotIdx+1,ei);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {6, 3, 7, 5, 2, 4};

    int n = 6;
    quickSort(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}