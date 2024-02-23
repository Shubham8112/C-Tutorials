#include<stdio.h>
/*int main() {
    int age;
    printf("enter age : ");
    scanf("%d",&age);
    if(age > 18) {
        printf("adult \n");
        printf("they can vote \n")
    }
    else if (age > 13 && age < 18) {
        printf("teenager \n");
    
    }
    else {
    printf("child");
    }
return 0 ;
}*/
// ternary operator example
/*int main(){
int age;
printf("enter age : ");
scanf("%d",&age);
age>=18 ? printf("adult\n") : printf("not adult \n");
return 0;
}*/
//CONDITION OPERATOR 
//SWITCH
// #include <stdio.h>
// int main(){
//     int day;
//     printf("enter day(1-7) : " );
//     scanf("%d",&day);
//     switch (day) {
//         case 1: printf("monday \n");
//                 break;
//         case 2: printf("tuesday \n");
//                 break; 
//         case 3: printf("wednesday\n");
//                 break;
//         case 4: printf("thursday \n");
//                 break;
//         case 5: printf("friday\n");
//                 break;
//         case 6: printf("saturday\n");
//                 break;
//         case 7: printf("sunday\n");
//                 break;
//         default : printf("not a valid day!\n");
    

//     }
// }
// write a program to check if a student passed or failed.
// marks>30 is pass and mark<=is fail
//    printf("enter mark: ");
//    // int main(){
//      scanf("%d",&mark);
//     if (mark<30)
//     printf("c");
//     else if (mark>=30 && mark <70)
//     printf("B");
//     else if (mark>=70 && mark<90)
//     printf("A");
//     else if (mark>=90 && mark<100)
//     printf("A+");
//     else
//     printf("please enter correct mark");
// return 0;
// write a program to find if a character entered by user is upper case or not
// int main(){
//         char ch;
//         printf("enter character : ");
//         scanf("%c",&ch);
//         if (ch >= 'A' && ch<='Z'){
//                 printf("upper case \n");
//        }else if(ch >= 'a' && ch <= 'z'){
//                 printf("lower case \n");
//        }
//        else {
//             printf("not english character \n");
//        }
//  return 0;      
// }
// int main(){
//         for(int i = 2; i<=20; i=i+2)
//         printf("%d\n",i);
// }
// write alphabet from A to Z
// int main(){
//     for(char ch='A';ch<='Z';ch++){
//         printf("%c \n",ch);
//     }
//     return 0;
// }
// int main(){
//     int i=2;
//     printf("%d \n",i--);
//     printf("%d",i);
// return 0;
// }
// while loop example
// int main(){
//     int i = 1;
//     while(i<=5){
//         printf("hello world\n");
//         i++;
//     }
//     return 0;
// }
// int main(){
//     int i=0;
//     int n;
//     printf("enter number: ");
//     scanf("%d",&n);
//     while(i<=n){
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }
// by using for loop same above problem
// int main(){
//     int n;
//     printf("enter number : ");
//     scanf("%d",&n);
//     for (int i=0 ; i<=n ; i++){
//     printf("%d\n",i);
//     }
//     return 0;
// }
// do while loop example
// int main(){
//     int i;
//     do{
//         printf("%d\n",i);
//         i++;
//     }while(i<=10);
//     return 0;
// }
// int main(){
//     int n;
//     printf("enter natural number : ");
//     scanf("%d",&n);
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     printf("sum is %d\n",sum);
// return 0;
// }
// int main(){
//     int n;
//     printf("enter natural number : ");
//     scanf("%d",&n);
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     printf("sum is %d\n",sum);
//     for(int i=n;i>=1;i--){
//         printf("%d\n",i);
//     }
// return 0;
// }
// int main(){
//     int n;
//     printf("enter natural number : ");
//     scanf("%d",&n);
//     int sum=0;
//     for(int i=1,j=n;i<=n&&j>=1;i++,j--){
//         sum=sum+i;
//     }
//     printf("sum is %d\n",sum);
//     for(int i=n;i>=1;i--){
//         printf("%d\n",i);
//     }
// return 0;
// }
// print the tabke of a number input by user 
// int main(){
//     int n;
//     printf("enter number : ");
//     scanf("%d",&n);
//     for (int i=1;i<=10;i++){
//         printf("%d\n",n*i);
//     }
//     return 0;

// }
// keep taking the number as input from user until user enter an odd number
// int main(){
//     int n;
//     do{
//         printf("enter number : ");
//         scanf("%d",&n);
//         printf("%d\n",n);
//         if (n%2 !=0){
//             break;
//         }

//     }while(1);
//     printf("THANK YOU");
//     return 0; 
// }
// practice:-print all the from number 1 to 10 except for 6 
// int main(){
//     for(int i=1; i<=10;i++){
//     if (i==6){
//         continue;
//     }
//     printf("%d\n",i);
//     }
//     return 0;
// }
// print all the odd number from 5 to 50
// int main(){
//     for(int i=5; i<=50;i++){
//     if (i%2==0){
//         continue;
//     }
//     printf("%d\n",i);
//     }
//     return 0;
// }
// print the factorial of number n
// int main(){
//     int n;
//     printf("enter number : ");
//     scanf("%d",&n);
//     int fact = 1;
//     for (int i=1;i<=n;i++){
//         fact = fact * i;
//     }
//     printf("final factorial is %d",fact);
//     return 0;
// }
// practice:-print reverse of the table for a number n
// int main(){
//     int n;
//     printf("enter number : ");
//     scanf("%d",&n);
//     for(int i=10;i>=1;i--){
//         printf("%d\n",n*i);
//     }
// }
// calculate the sum of all number between 5 and 50 (including 5&50)
// int main(){
//     int sum =0;
//     for (int i=5;i<=50;i++){
//         sum=sum+i;
//     }
//      printf("%d",sum);
//     return 0;
// }
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    if(i%2==0){
        printf("%d",i/2);
    }
    else if(i%2!=0){
        printf("%d",3*i+1);
 
    }
    return 0;
}