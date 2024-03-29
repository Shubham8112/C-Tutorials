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
// int main(){
//     int t,n;
//     scanf("%d",&t);
//     // printf("enter no: %d\n",t);
//     while(t>0){
//         scanf("%d",&n);
//         if (n % 4 >= 2 ){
//             printf("True\n");
//         }
//         else {
//             printf("False\n");
//         }
//         t--;
//     }
// }
// void calculateprice(float value);
// int main(){
//     float value;
//     scanf("%f",&value);
//     calculateprice(value);
//     return 0;
// }
// void calculateprice(float value){
//     value = value + (0.18 * value);
//     printf("final price is : %2f",value);
// }/
// #include<stdio.h>
// void iseven(int x){
//     if(x % 2 == 0){
//         printf("Even");
//     }
//     else{
//         printf("Not Even");
//     }
// }
// void ismultiple(int x){
//     if(x % 10 == 0 ){
//         printf("\nMultiple of 10");
//     }
//     else{
//         printf("Not a multiple of 10");
//     }
// }
// int main(){
//     int x;
//     scanf("%d",&x);
//     iseven(x);
//     if (x % 2 == 0){
//         ismultiple(x);
//     }
//     return 0;
// }
// void propertyTaxCalc(double x){
//     double tax_amount = x * 0.92;
//     double property_tax = x * 0.0105;
//     printf("Taxable Amount: %.2f\n",tax_amount);
//     printf("Property tax: %.2f",property_tax);
// }
// int main(){
//     double x;
//     scanf("%lf",&x);
//     propertyTaxCalc(x);
//     return 0;
// }
// question: use library funtion to calculate the square of a number given by user
#include<math.h>
// int main(){
//     int n = 4;
//     printf("%.2f",pow(n,2));
//     return 0;

// }
// quetion:-write a function to calculate area of square ,a circle and a rectangle
// float squarearea(float side);
// float circlearea(float radius);
// float rectanglearea(float a , float b);
// int main(){
//     float a = 5.0;
//     float b = 10.0;
//     float ra = 2;
//     printf("area is : %.2f", rectanglearea(a,b));
//     printf("area of circle : %.2f",circlearea(ra));
//     return 0;


// }
// float squarrearea(float side){
//     return side * side;
// }
// float circlearea(float radius){
//     return radius * radius * 3.14;
// }
// float rectanglearea(float a , float b){
//     return a *b;
// }
// print hello world 5 times
// int main(){
//     char a[] = "hello world";
//     for (int i = 0 ; i <= 5 ; i++){
//         printf("%s\n",a);
//     }
// }
// recursive funtion example
// void printhw(int count);
// int main(){
//     // int a = 5;
//     printhw(5);
//     return 0;
// }
// void printhw(int count){
//     if (count == 0){
//         return;
//     }

//     printf("hello world\n");
//     printhw(count-1);
// }
// question : sum of first n natuaral number
// int sum(int n);
// int main(){
//     printf("sum is : %d",sum(5));
//     return 0;
// }
// int sum(int n){
//     if (n == 1){
//         return 1;
//     }
//     int sumNm1 = sum(n-1);
//     int sumN = sumNm1 + n;
//     return sumN;
// }
// question: factorial of n
// int fact(int n);
// int main(){
//     printf("factorial is: %d",fact(5));

// }
// int fact(int n){
//     if (n == 0){
//         return 1;
//     }
//     int factNm1 = fact(n-1);
//     int factN = factNm1 * n;
//     return factN;
// }
// or 
// int main(){
//     int a = 4;
//     int sum = 1;
//     for(int  i = 1 ; i <= a ; i++){
//         sum *= i;
//     }
//     printf("factorial is %d",sum);
// }
// question: write a function to convert celsius to fahrenheit
// float convertTemp(float celsius);
// int main(){
//    float far = convertTemp(2);
//    printf("far : %f",far);
//    return 0;
// }
// float convertTemp(float celsius) {
//     float far = celsius * (9.0/5.0) + 32;
//     return far;
// }
// question: write a function to calculate percentage of student from mark in
// science , math and sanskrit
// int calcpercentage(int science, int math,int sanskrit);
// int main(){
//     int math = 40;
//     int sc = 65;
//     int sans = 85;
//     printf("percentage is : %d",calcpercentage(math,sc,sans));
//     return 0;
// }
// int calcpercentage(int science, int math,int sanskrit){
//     return ((math + sanskrit +science)/3);
// }
// write a function to print n term of the fivonacci sequence.
// int fib(int n);
// int main(){
//     fib(6);
//     return 0;
// }
// int fib(int n){
//     if (n == 0){
//         return 0;
//     }
//     if (n == 1){
//         return 1;
//     }
//     int fibNm1 = fib(n-1);
//     int fibNm2 = fib(n - 2);
//     int fibN = fibNm1 + fibNm2;
//     printf("fib of %d is : %d \n ", n , fibN);
//     return fibN;
// }
void even(int *a ,int *b){
    for(int i = *a ; i<=*b;i++){
        if (i % 2 == 0){
            printf("%d",i);
        }
        else{
            printf("\n");
        }
    }

}
int main(){
    int a , b;
    scanf("%d %d",&a,&b);
    even(&a,&b);


}