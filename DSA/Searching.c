#include<stdio.h>
// #include<stdbool.h>

void linear(int arr[], int size, int target){
    for(int i=0;i<size;i++){
        if(arr[i]== target){
            printf("yes target exist");
            return;
        }
    }

    printf("\ntarget not exist\n");
} 

void binary(int arr[], int size, int target){
    int st = 0;
    int end = size - 1;

    while(st<=end){
        int mid = st + (end - st)/2;
        if(arr[mid] == target){
            printf("target found");
            return;
        }else{
            if(target<arr[mid]){
                end = mid - 1;
            }else if(target > arr[mid]){
                st = mid + 1;
            }
        }
    }

    printf("\ntarget not found\n");
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    linear(arr, size, 9);
    binary(arr, size, 9);
    return 0;
}