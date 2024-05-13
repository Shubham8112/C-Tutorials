
#include<stdio.h>
void printarray(int *arr , int n){
    printf("before sorting ");
    for (int i = 0 ; i < n ; i++ ){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void sorting(int *arr , int n){
    int temp;
    int count = 0;
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ;j < n- 1-i ; j++){
            if(arr[j] > arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
        count++;
    }
    printf("\nnumber of working pass %d",count);
    printf("\n");
    printf("after sorting ");
    for (int i = 0 ; i < n ; i++ ){
       printf("%d ",arr[i]);
    }
}
int addativesorting(int *arr , int n){
    int temp;
    int isSorted = 0;
    for(int i = 0 ; i < n - 1; i++){
        isSorted = 1;
        printf("Working on pass number %d\n",i+1);
        for(int j = 0 ; j < n - 1 - i ; j++){
            if(arr[j] > arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            isSorted = 0; 
            }
        }
         if(isSorted){
         return 0;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    printarray(arr,n);
    addativesorting(arr,n);
    printarray(arr,n);
    return 0;
}