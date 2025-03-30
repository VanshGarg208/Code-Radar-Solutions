#include<stdio.h>
int bubbleSort(int arr[],int n);
void printSort(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    printSort(arr,n);
    return 0;    
}
int bubbleSort(int arr[],int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j+1]=arr[j];
                arr[j+1]=temp;
            }
        }
    }
}
void printSort(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}