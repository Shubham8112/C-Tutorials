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

#include<stdio.h>

int main(){
    int n, h;
    scanf("%d", &n);
    float temperature[n];
    
    // Input temperatures for each day
    for (int i = 0; i < n; i++){
        scanf("%f", &temperature[i]);
    }
    
    scanf("%d", &h);
    
    // Adjust index by h-1 since array index starts from 0
    printf("%.2f", temperature[h - 1]);
    
    return 0;
}

