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
// #include <stdio.h>
    
// int max() {
//     return 1;
// }
// int main() {
//     int i = 0;
//     for (max(); i == 1; i = 2)
//         printf("L ");
//     printf("AL");
// }
#include <stdio.h>

// Function to check if a number has exactly 9 factors
// int check_9_factors(int num) {
//     int count = 0;
//     for (int i = 1; i * i <= num; ++i) {
//         if (num % i == 0) {
//             if (num / i == i) {
//                 count++;
//             } else {
//                 count += 2;
//             }
//         }
//     }
//     return count;
// }

// int main() {
//     int N;
//     scanf("%d", &N);

//     int count = 0;
//     for (int i = 1; i <= N; ++i) {
//         if (check_9_factors(i) == 9) {
//             printf("%d ", i);
//             count++;
//         }
//     }
//     printf("\n%d", count);

//     return 0;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int count = 0;
//     for (int i = 1 ; i <= n ;i++){
//         if(n % i == 0){
//             printf("%d ",i);
//             count++;
//         }
//     }
//     if (count >= 9){
//         printf("\nyes it divisble by %d divisor ",count);
//     }else{
//         printf("\nnot divisible more or equal to 9 divisor");
//     }
    
// }
// write a program to find smallest number
// int a,b,c;
// int main(){
//     auto int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     if (a < b && a<c){
//         printf("%d",a);
//     }
//     else if(b < a && b < c){
//         printf("%d",b);
//     }
//     else{
//         printf("%d",c);
//     }
// }
// You are using GCC
#include <stdio.h>

// void recursiveFunc(int n, int m) {
//     if (n >= 0) {
//         printf("Before call(%d): %d\n", n, m);
//         recursiveFunc(n - 1, m);
//         printf("After return(%d): %d\n", n, m);
//     }
// }

// int main() {
//     int n;
//     // printf("Enter an integer n: ");
//     scanf("%d", &n);
//     auto m = 3; // Initialize m to 3
//     recursiveFunc(n, m);
//     return 0;
// }
#include<math.h>
// int main(){
//     int w;
//     float h;
//     scanf("%d",&w);
//     scanf("%f",&h);
//     // float k = h * h;
//     float bmi = w / pow(h , 2);
//     if (bmi < 18.5 ){
//         printf("U");
//     }
//     else if(18.5 <= bmi || bmi <= 25.0){
//         printf("N");
//     }
//     else if( 25.0 < bmi || bmi <= 30.0){
//         printf("H");
//     }
//     else if(bmi>30.0){
//         printf("O");
//     }
//     else{
//         printf("\n");
//     }
// }
// #include<stdio.h>
// int main(){
//     int m[8];
//     for (int i= 0 ; i < 8 ; i++){
//         scanf("%d",&m[i]);
//     }
//     for (int i = 0 ; i < 8 ; i++){
//         printf("%d ",m[i]);
//     }
// }

// int main(){
//     int n ; 
//     scanf("%d",&n);
//     int m[n][n];
//     for (int i = 0 ; i< n ; i++){
//         for (int j = 0 ; j < n ; j++){
//              scanf("%d",&m[i][j]);
//         }
       
//     }
//     for (int i = 0 ; i< n ; i++){
//         for (int j = 0 ; j < n ; j++){
//              printf("%d ",m[i][j]);
//         }
//      printf("\n");
//     }
//     int sum = 0,sum2 = 0,sum3 = 0;
//     for (int i = 0 ; i< n ;i++){
//         sum += m[0][i];
//     }
//     for (int i = 0 ; i< n ;i++){
//             sum2 += m[i][0];
//     }
//     for (int i = 0 ; i< n ; i++){
//         sum3 += m[i][i];
//     }
//     if ( sum == sum2 && sum2 == sum3){
//         printf("The given matrix is a magic square matrix");
//     }else{
//         printf("The given matrix is not magic square matrix");
//     }
// }

// #include<math.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         scanf("%d",&arr[i]);
//     }

//     for(int i=0; i<n)
 
// }




#include <stdio.h>
#include <math.h>

// int main() {
//     int n, count = 0;

//     printf("Enter the size of the array: ");
//     scanf("%d", &n);
//     int arr[n];

//     printf("Enter %d elements: ", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     for(int i=0; i<n; i++){
//          int sqrtNum = sqrt(arr[i]);

//         if (sqrtNum * sqrtNum == arr[i]) {
//             count++;
//             printf("%d ",arr[i]);
//         }
//     }

//     printf("\nCount of perfect square elements: %d\n", count);

//     return 0;
// }


// You are using GCC
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m[n];
    for (int i = 0 ; i < n ; i++){
        scanf("%d",&m[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i = 0 ; i < n ; i++){
        if(m[i] == k){
        printf("The target value %d is present at index %d",k,i);
        }else{
            printf("the target value %d is not present in the array");
        }
    }
}