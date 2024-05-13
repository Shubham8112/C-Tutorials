// question:-write a program to enter price of 3 items & print
//  their final cost with gst
#include<stdio.h>
// int main(){
    // float price[] = {100,100,100} ;
    // printf("enter price :- ");
    // scanf("%f %f %f",&price[0],&price[1],&price[2]);
    // printf("total price1 = %f\ntotal price2 = %f\ntotal price3 = %f",price[0]+(0.18 * price[0]),price[1]+(0.18 * price[1]),price[2]+(0.18 * price[2]));
    // scanf("%f %f %f",&price[0],&price[1],&price[2]);
    // printf("%f",price[0]+(0.10 * price[0]));
// }
// note :- size of int = 4 bytes
// size of float = 4 bytes
// size of char = 1 bytes
// int main(){
// int age = 'h';
// int *ptr = &age;
// printf("ptr = %u\n",ptr);
// ptr++;//here increament operator increase 4 byte of actual size
// printf("ptr = %u\n",ptr);
// ptr--;
// printf("ptr = %u",ptr);
// }
// int main(){
// char age = 'h';
// char *ptr = &age;
// printf("ptr = %u\n",ptr);
// ptr++;//here increament operator increase 1 byte of actual size
// printf("ptr = %u\n",ptr);
// ptr--;
// printf("ptr = %u",ptr);
// }
// int main(){
//     int h[]={15,10,12,18};
//     for(int i=0;i<4;i++){
//         printf("%d ",h[i]);
//     }
//     printf("\n");
//     for(int i=3;i>=0;i--){
//         printf("%d ",h[i]);
//     }
//     printf("\n");
//     for(int i=3;i>=0;i--){
//         if(i % 2 == 0){
//             if(i == 0){
//                 break;
//             }
//         printf("%d ",h[i]);
//         }
//     }
// }
// quetion:- write a function to count the odd number of array
// int countodd(int arr[],int n);
// int main(){
    // int arr[6] = {1,2,3,4,5,6};
    // printf("%d\n",*(arr+2));
    // printf("%d\n",*(arr+3));
    // printf("%u\n",*(arr+6));
    // printf("%u\n",&arr[6]);
    // printf("%u\n",&arr[5]);
    // void foo();
    // printf("A ");
    // foo();


//     printf("%d",countodd(arr,10));
//     return 0;
// }
// void foo(){
//     printf("B ");
// }
// int countodd(int arr[],int n){
//     int count = 0;
//     for (int i = 0 ; i<n ;i++){
//         if (arr[i] % 2 != 0){
//             count++;
//         }
//     }
//    return count;
// }

// #include<stdio.h>

// int main(){
//     int n, h;
//     scanf("%d", &n);
//     float temperature[n];
    
//     // Input temperatures for each day
//     for (int i = 0; i < n; i++){
//         scanf("%f", &temperature[i]);
//     }
    
//     scanf("%d", &h);
    
//     // Adjust index by h-1 since array index starts from 0
//     printf("%.2f", temperature[h - 1]);
    
//     return 0;
// }

// int main(){

//     int n,items;
//     printf("enter the size of array : ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the element of array : ");
//     for(int i = 0 ; i < 3 ; i++){
//         scanf("%d",&arr[i]);
//     }
//     items = 1;
//     n++;
//     for(int i  = n ; i > 5; i--){
//         arr[i - 1] = arr[i-2];
//     }
//     arr[0] = items;
//     for(int i = 0 ; i < n ; i++)
//         printf("%d\t",arr[i]);
    
// }    

#include <stdio.h>

// void test(int arr[], int size, int dl) {
//     for (int i = dl; i < size - 1; i++) {
//         arr[i] = arr[i + 1];
//     }
//     size--;
// }

// int main() {
//     int arr[] = {10, 25, 3, 8, 12, 15, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int del = 3; 

//     test(arr, size, del);

//     for (int i = 0; i < size - 1; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }
// int main(){
//     int k[] = {5,8,6,3};
//     int N = sizeof(k)/sizeof(k[0]);
//     printf("%d\n",N);
//     N = sizeof(k[0]);
//     printf("%d",N);

// }
// practice bubblesort
// void printarray(int *arr,int n){
//     printf("before sorting : ");
//     for(int i = 0 ; i < n ;i++ ){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }
// int sorting(int *arr , int n){
//     int isSorted = 0;
//     int temp = 0;
//     for(int i = 0 ; i < n-1 ; i++){
//          isSorted = 1;
//         for(int j = 0; j < n-1-i ; j++){
//             if(arr[j] > arr[j+1]){
//                 temp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j]= temp;
//                 isSorted = 0; 
//             }
//         }
//         if(isSorted){
//             return 0;
//         }
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     printarray(arr,n);
//     sorting(arr,n);
//     printarray(arr,n);
// }
// int searching(int *arr,int n,int e);
// int main(){
//     int n,element;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter seaching element");
//     scanf("%d",&element);
//     int found = searching(arr,n,element);
//     printf("the element %d found in index %d",element,found);

// }
// int searching(int *arr,int n , int e){
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] == e){
//             return i;
//         }
//     }
//     return -1;
// }
// practice problem
// int main(){
//     int n ; 
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] != i){
//             printf("%d ",arr[i]);
//         }
//     }
// }
#include<stdlib.h>
// int main(){
//     int *ptr ;
//     ptr =(int*) calloc(50 , sizeof(int));
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     int smallest = -1;
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] % 2 == 0 && (smallest == -1 || arr[i] < smallest)){
//             smallest = arr[i];
//         }
//     }
//     printf("%d",smallest);
//     return 0;
        
// }
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int e,new;
    scanf("%d %d",&e,&new);
    int found = 0;
    n++;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == e){
            found = i;
        }
    }
    arr[found] = new;
    for(int i = 0 ; i < found ; i++){
        printf("%d",&arr[i]);
    }

}
