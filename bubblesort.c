#include<stdio.h>
void display(int arr[],int size){
    for(int i = 0 ; i<size ; i++){
        printf("%d ",arr[i]);

    }
    printf("\n");
}
void BubbleSort(int arr[],int size){
    for(int i = 0 ; i<size-1; i++){
        for(int j = 0 ; j<size-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
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
    BubbleSort(arr,size);
    display(arr,size);
    return 0;
    }