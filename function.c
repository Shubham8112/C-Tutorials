#include<stdio.h>
//declaration or prototype
// void printhello();
// int main(){
//     printhello();//function call
// }
// // function definition
// void printhello(){
//     printf("hello! Shubham");
//     printf(" Sir\nhow are you?\n");
//     printf ("good bye");
// }
// question:-write 2 function -one to print "hello"& second to 
// void printhello();
// void goodbye();
// int main(){
//     printhello();
//     goodbye();
//     printhello();
//     return 0;
// }
// void printhello(){
//     printf("Hello!\n");
// }
// void goodbye(){
//     printf("Good bye\n");
// }
// quetion:- give output namaste if user input india and give bonjuor if user input french
// void Namaste();
// void Bonjour();
// int main(){
//     char country;
//     printf("enter french for f and india for i: ");
//     scanf("%c",&country);
//     if (country == 'i'){
//         Namaste();
//     }
//     else if (country == 'f') {
//         Bonjour();
//     }
//     return 0;
// }
// void Namaste() {
//     printf("Namaste\n");
// }
// void Bonjour(){
//     printf("Bonjour\n");
// }
// int sum(int a, int b);
// int main(){
//     int a,b;
//     printf("Enter first number :");
//     scanf("%d",&a);
//     printf("Enter second number :");
//     scanf("%d",&b);
//     int s = sum(a,b);
//     printf("sum is : %d",s);
//     return 0;
// }
// int sum (int x , int y){
//     return x - y;
// // }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int count = 0;
//     for(int i = 0 ; i < n ; i++){
//         while(n%10==0){
//         int sum = 0;
//             sum += i;
//             printf("print number :",sum);
//         }
//         count++;
//     }
//     // count++
//     // printf("no of prime :",count);
// }
// int main(){
//     int input;
//     scanf("%d",&input);
//     int step = 0;
//     for (int i = 1; i < input ; i++){
//         while(input%10==0){
//             int sum = 0;
//             sum += i;
//         }
//         step++;
//     }
//     printf("prime : ",step);
// }
// int main(){
//     int x = 3,i = 0;
//     do {
//         x = ++x;
//         ++i;
//     }while (i != 6);
//     printf("%d",x);
//     return 0;
// }
int main(){
    int t,n;
    scanf("%d",&t);
    printf("enter no: %d\n",t);
    while(t>0){
        scanf("%d",&n);
        if (n % 4 >= 2 ){
            printf("True\n");
        }
        else {
            printf("False\n");
        }
        t--;
    }
}