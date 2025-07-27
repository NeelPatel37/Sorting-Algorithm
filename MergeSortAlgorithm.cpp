#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int si, int mid, int ei)
{

    int i = si-1;
    int j = mid+1;

}

void mergeSort(int arr[], int si, int ei)
{

    //base case 
    if (si>=ei){
        return;
    }

    int mid = si + (ei-si)/2;

    //mid = (si + ei )/2

    mergeSort(arr,si,mid); // left half
    mergeSort(arr,mid+1,ei); // right half

    merge(arr,si,mid,ei);

}

