// You are given a sorted array of integers nums in ascending order and an integer target value. Write a C function to implement binary search to find the index of the target value in the array. If the target value is not found, return -1.
// Input:
// nums = {10, 20, 30, 40, 50}
// target = 40


// Output:
// Index of target value 40: 3
#include<stdio.h>
int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            printf("Index of target value 40 : %d",mid);
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    } 
    return -1;
    
}
// int main(){
//     int size = 5;
//     int arr[5] = {10,20,30,40,50};
//     int element = 40;
//     binarySearch(arr,size,element);
// }
// 2/ Problem Statement: 
// You are given a 2D array matrix of size m x n. Write a C program to calculate
// and display the transpose of the matrix. The transpose of a matrix is obtained by 
// swapping the rows and columns of the matrix.
// Input:
// matrix = {
//   {1, 2, 3},
//   {4, 5, 6},
//   {7, 8, 9}
// }


// Output:
// Transpose of the matrix:
// 1 4 7
// 2 5 8
// 3 6 9

#include<stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0 ; i < col ; i++){
        for(int j = 0 ; j < row ; j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}
