#include<stdio.h>

void merge(int arr[], int low, int mid, int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int leftArr[n1];
    int rightArr[n2];

    int i,j;
    for(i=0;i<n1;i++){
        leftArr[i] = arr[low+i];
    }
    for(j=0;j<n2;j++){
        rightArr[j] = arr[mid+1+j];
    }

    i=j=0;
    int k = low;
    while(i<n1 && j<n2){
        if(leftArr[i]<=rightArr[j]){
            arr[k++] = leftArr[i++]; 
        }else{
            arr[k++] = rightArr[j++];
        }
    }

    while(i<n1){
        arr[k++] = leftArr[i++];
    }
    while(j<n2){
        arr[k++] = rightArr[j++];
    }
}
void mergeSort(int arr[], int low, int high){
    if(low>=high) return;

    int mid = low + (high - low)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}
int main(){
    int arr[] = {5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, size-1);

    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}