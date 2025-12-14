#include<stdio.h>

int partition(int arr[], int low, int high){
    int i = low;
    int j = high;
    int pivot = arr[low];
    while(i<j){
        while(arr[i]<=pivot && i<high){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}
void QuickSort(int arr[], int low, int high){
    if(low<high){
        int pivot = partition(arr,low, high);
        QuickSort(arr,low, pivot-1);
        QuickSort(arr, pivot+1, high);
    }
}
int main(){
    int arr[] = {5,4,1,7,3,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    QuickSort(arr, 0, size-1);

    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}