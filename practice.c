#include <stdio.h>
// int main(){
//     printf("the first 10 natural number : \n");
//     for(int i=0;i<=10;i++){
//     printf("%d\n",i);
//     }
//     return 0;
    
// }     
//  question :-Find the size of int,float,double,and char 
// int main(){
//     int intType;
//     float floatType;
//     double doubleType;
//     char charType;
//     printf("Size of int: %zu bytes\n", sizeof(intType));
//     printf("Size of float: %zu bytes\n", sizeof(floatType));
//     printf("Size of double: %zu bytes\n", sizeof(doubleType));
//     printf("Size of char: %zu byte\n", sizeof(charType));
    
//     return 0;
// }
// question:-to check whether number is even or odd
// int main(){
//     int num1;
//     printf("enter number : ");
//     scanf("%d",&num1);
//     if (num1%2==0){
//         printf("even");
//     }
//     else{
//         printf("odd");
//     }
//     return 0;
// }
// question:- to print alphabets from A to Z using any loop(for/while/do-while)
// int main(){
//         char i;
//         printf("the alphabet from A to Z \n");
//         for (i='A'; i<='Z'; i++){
//             printf("%c ",i);
//         }
//             return 0;
// }
// quetion:-to check whether a number is positive, negative or zero
// int main(){
//     int num;
//     printf("enter number: ");
//     scanf("%d",&num);
//     if(num > 0){
//         printf("positive number");
//     }
//     else if(num < 0){
//         printf("negative");
//     }
//     else if(num == 0){
//         printf("zero");
//     }
//     else{
//         printf("please enter correct number");
//     }
//     return 0;
// }
// question:- to convert fahrenheit to celsius(in values/int)
//  question:-to swap two integers numbers
int main(){
    int a,b,swap;
    printf("enter number : ");
    scanf("%d %d",&a,&b);
    swap=a;
    a=b;
    b=swap;
    printf("a= %d\n",a);
    printf("b= %d",b);
    return 0;
}