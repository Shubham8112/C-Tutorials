// #include <stdio.h>
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
// int main(){
//     int a,b,swap;
//     printf("enter number : ");
//     scanf("%d %d",&a,&b);
//     swap=a;
//     a=b;
//     b=swap;
//     printf("a= %d\n",a);
//     printf("b= %d",b);
//     return 0;
// }
//  Question Title: Rock, Paper, Scissors Game

// Your task is to create a simple rock, paper, scissors game in C language using if-else statements.

// Requirements:

// Your program should prompt the user to enter their choice (0 for rock, 1 for paper, 2 for scissors).
// The computer's choice should be randomly generated.
// Display the result of the game: whether the user wins, loses, or if it's a tie.

// Example Output:

// Enter your choice (0 for rock, 1 for paper, 2 for scissors): 1
// Computer chose: Rock
// You win!

// Note:

// You are allowed to use if-else or conditional statements and the standard input/output functions provided by the C language.
// Avoid using any advanced concepts or external libraries.
// #include <stdio.h>

// int main() {
//     int n = 4;
//     int i = 1;
//     int num = 1;

//     while (i <= n) {
//         int j = 1;
//         while (j <= i) {
//             printf("%d", num);
//             num++;
//             j++;
//         }
//         printf("/n");
//         num = num - i + 1;
//         i++;
//     }

//     return 0;


// }
// #include <stdio.h>
// int main(){
//     float m1,n1;
//     float m2,n2;
//     scanf("%f%f",m1,n1);
//     scanf("%f%f",m2,n2);
//     float totalm1,totalm2;
//     totalm1=m1+n1/2;
//     totalm2=m2+n2/2;
//     printf("Crop 1: %.2f",totalm1);
//     printf("Crop 2: %.2f",totalm2);
//     (totalm1>totalm2) ? printf("Crop 1 had the highest average yield"):printf("Crop 2: had the highest average yield ");
//     return 0;
// }
#include <stdio.h>
// int main(){
//     int a,b,c,d,e;
//     scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
//     int total;
//     float p;
//     total=a+b+c+d+e;
//     printf("Total: %d\n",total);
//     p=total*100/500;
//     printf("percentage: %.2f",p);
//     return 0;
// }
// int main(){
//     int n,last_digit,f,sum;
//     scanf("%d",&n);
//     last_digit=n%10;
//     for(f=n;f>=10;f/=10){

//     }
//     sum=last_digit+f;
//     printf("sum = %d",sum);

// }
// int main(){
//     int a = 200;
//     if ( a < 20) {
//         printf("a is less than 20\n");
//     }
//     else {
//         printf("a is not less than 20\n");

//     }
//     printf("the value of a : %d",a);
// }
// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     if ( a < b) {
//         printf("a is less than b\n");
//     }
//     if (a > b) {
//         printf("a is not less than b\n");

//     }
//     printf("the value of a : %d\n",a);
//     printf("the value of b : %d",b);
// }
// int main(){
//     int count = 0, n = 100, sum = 0;
//     do{
//         sum += n;
//         n /= 2;
//         count++;
//     }
//     while (n >= 1);
//     printf("%d",count);
//     return 0;
// }
// int main(){
//     int i;
//     scanf("%d",&i);
//     do{
//         printf("%d\n",i*2);
//         i++;
//     }while(i<=10);
//     return 0;
// }
#include <stdio.h>
// int main(){
//     int a=10;
//     while(a>5){
//     int a=1;
//     printf(a);
//     a--;
//     }   
//     return 0
// }
// int main(){
//     int n;
//     printf("enter number : ");
//     scanf("%d",&n);
//     for(int i = 1; i <= n ; i++){
//         {
//             for(int k=1;k<i;k++){
//                 printf(" ");
//             }
//         }
//         for(int j = i ; j <= n ; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int n;
//     printf("enter day(1-7): ");
//     scanf("%d",&n);
//     switch(n){
//         case 1: printf("monday\n");
//         break;
//         case 2: printf("Tuesday\n");
//         break;
//         case 3:printf("wednesday");
//         break;
//         default: printf("not a correct number");
//     }
//     return 0;

// }
#include <stdio.h>
// int main(){
//     float w1,w2,evati,elum;
//     scanf("%f %f",&w1,&w2);
//     evati = w1/w2;
//     elum = w2/w1;
//     (evati > elum)? printf("the weight %.2f of evati\n",evati):(evati < elum) ? printf("the weight %.2f of evati\n",evati):printf("");
//    if(evati > elum || evati < elum){
//     printf("the weight %.2f of elum\n",elum);
//     printf("not equal");
//    }
//     else if (evati == elum){
//         printf("the weight %.2f of evati.\n",evati);
//         printf("the weight %.2f of elum.\n",elum);
//         printf("equal");
//     }
//     return 0;
// }
// int main(){
//     int n;
//     printf("enter number : ");
//     scanf("%d",&n);
//     int sum;
//     for (int i = 1 ; i < n ; i++){
//         sum += n % 10;
//         printf("%d",sum);
//         if (n<10){
//             break;
//         }
//     }

// }
int main(){
    int n ; 
    scanf("%d",&n);
    int m[n][n];
    for (int i = 0 ; i< n ; i++){
        scanf("%d",&m[n][n]);
    }
    int sum = 0,sum2 = 0,sum3 = 0;
    for (int i = 0 ; i< n;i++){
        sum += m[i][0];
    }
    for (int i = 0 ; i< n;i++){
        for (int j = 0 ; j < n;j++){
            sum2 += m[0][j];
        }
    }
    for (int i = 0 ; i< 1 ;i++){
        for (int j = 0;j < n;j++){
            int k = i;
            sum3 += m[k][j];
            k++;
        }
    }
    if ( sum2 = sum3){
        printf("magic matrix");
    }else{
        printf("not magic matrix");
    }
    
}