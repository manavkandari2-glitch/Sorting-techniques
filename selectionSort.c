#include<stdio.h>
void display(int arr[],int size){
    for(int i = 0 ; i<size ; i++){
        printf("%d ",arr[i]);

    }
    printf("\n");
}
void selectionSort(int arr[],int size){
    for(int i = 0 ; i<size-1 ; i++){
        int minIndex=i;
        for(int j = i+1 ; j<size ; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        if(minIndex!=i){
            int temp=arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex]=temp;
        }
    }
}
int main(){
    int arr[100],size;
    printf("Enter the size of the array");
    scanf("%d",&size);
    printf("Enter the elements of the array");
    for(int i = 0 ; i<size ; i++)
        scanf("%d",&arr[i]);
    display(arr,size);
    selectionSort(arr,size);
    display(arr,size);
    return 0;   
}