// #include<stdio.h>
 
// int linearSearch(int arr[], int size, int element){
//     for (int i = 0; i < size; i++)
//     {
//         if(arr[i]==element){
//             return i;
//         }
//     }
//     return -1;
// }
 
// int binarySearch(int arr[], int size, int element){
//     int low, mid, high;
//     low = 0;
//     high = size-1;
//     // Keep searching until low <= high
//     while(low<=high){
//         mid = (low + high)/2;
//         if(arr[mid] == element){
//             return mid;
//         }
//         if(arr[mid]<element){
//             low = mid+1;
//         }
//         else{
//             high = mid -1;
//         }
//     } 
//     return -1;
    
// }
 
// int main(){
//     // Unsorted array for linear search
//     // int arr[] = {1,3,5,56,4,3,23,5,4,54634,56,34};
//     // int size = sizeof(arr)/sizeof(int);
 
//     // Sorted array for binary search
//     int n;
//     scanf("%d",&n);
//     int arr[n]; 
//     for(int i = 0 ; i <n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     // = {1,3,5,56,64,73,123,225,444};
//     int size = n; 
//     // sizeof(arr)/sizeof(int);
//     printf("Enter element which you want to search : ");
//     int element;
//     scanf("%d",&element);
//     int searchIndex = binarySearch(arr, size, element);
//     for(int i = 0 ; i < size ; i++){
//         if(searchIndex != arr[i]){
//             printf("The element %d was not found",element);
//             break;
//         }else{
//             printf("The element %d was found at index %d \n", element, searchIndex);
//         }
//     }
//     return 0;
// }
#include<stdio.h>
 
int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
 
int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    // Keep searching until low <= high
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
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
 
int main(){
    // Unsorted array for linear search
    // int arr[] = {1,3,5,56,4,3,23,5,4,54634,56,34};
    // int size = sizeof(arr)/sizeof(int);
 
    // Sorted array for binary search
    int arr[] = {1,3,5,56,64,73,123,225,444};
    int size = sizeof(arr)/sizeof(int);
    int element = 144;
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchIndex);
    return 0;
}
