#include<stdio.h>

void selectionSort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]<=arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void bubbleSort(int arr[], int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]<=arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void insertionSort(int arr[], int size){
    for(int i=0;i<size;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}
int main(){
    int arr[] = {4,2,16,7,9,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, size);

    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}