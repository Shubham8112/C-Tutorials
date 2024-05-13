#include<stdio.h>
#include<string.h>
// char print(char arr[]);
// int main(){
//     char name[] = "Shubham";
//     char title[] = "Pandey";
//     // printf("%s\n%s",name,title);

//     print(name);
//     print(title);
// }
// char print(char arr[]){
//     for(int i = 0 ; arr[i] != '\0' ; i++ ){
//         printf("%c",arr[i]);
//     }
//     printf("\n");
// }
// int main(){
//     char name[50];
//     printf("Enter your name: ");
//     scanf("%s",name);
//     printf("My name is %s",name);
//     return 0;
// }
//gets,puts
// int main(){
//     char name[50];
//     printf("Enter you name: ");
//     gets(name);
//     puts(name);
// }
// fgets example
// int main(){
//     char name[100];
//     fgets(name,100,stdin);
//     puts(name);
//     return 0;
// }
// ******NOTE:- char pointer can be reinitialized but char array can not reinitialized .....see below examples
// int main(){
//     char *canchange = "shubham";
//     puts(canchange);
//     canchange = "shubham pandey";
//     puts(canchange);
//     return 0;
// }
// int main(){
//     char cannotchange[] = "shubham";
//     puts(cannotchange);
    // cannotchange = "shubham_pandey";
    // puts(cannotchange);
// }
//here the above code you can see array char cannot be change 
// int main(){
//     int a = printf("neo");
//     printf("%d",a);
// }
// You are using GCC
// #include<stdio.h>
// int main(){
//     char name[50];
//     double ticket;
//     char dest[50];
//     fgets(name,50,stdin);
//     scanf("%lf",&ticket);
//     fgets(dest,50,stdin);
//     printf("Passenget Information:\n");
//     printf("Name: ");
//     printf("%s",name);
    
//     printf("Ticket Price: Rs. %.2f",ticket);
//     printf("\nDestination Location: ");
//     puts(dest);
// }
// #include<stdio.h>
// #include<string.h> // for strcmp

// int main(){
//     char name[50];
//     double ticket;
//     char dest[50];

//     printf("Enter name: ");
//     fgets(name,50,stdin);

//     printf("Enter ticket price: ");
//     scanf("%lf",&ticket);
//     getchar(); // consume the newline character

//     printf("Enter destination: ");
//     fgets(dest,50,stdin);

//     // Remove the newline character from dest if it exists
//     size_t len = strlen(dest);
//     if (len > 0 && dest[len-1] == '\n')
//         dest[len-1] = '\0';

//     if(strcmp(dest, "Delhi") == 0){
//         printf("Sorry, Delhi is not available as a destination\n");
//         return 0;
//     }

//     printf("Passenger Information:\n");
//     printf("Name: %s", name);
//     printf("Ticket Price: Rs. %.2f\n", ticket);
//     printf("Destination Location: %s", dest);
    
//     return 0;
// }
// strlen library function.....
#include<string.h>
// int main(){
//     char name[] = "pandey";
//     int length = strlen(name);
//     printf("%d",length);
// }
// strcpy library funtion...:- this function help to copy the string from another variable and assign to any variable
// int main(){
//     char old_str[] = "old_str";
//     char new_str[]= "new_str";
//     strcpy(new_str,old_str);
//     puts(new_str);
//     printf("%s",old_str);
// }
// strcat :- this function help to concatinate to string 
// int main(){
//     char first_name[100] = "shubham ";
//     char last_name[] = "pandey";
//     strcat(first_name,last_name); 
//     printf("%s",first_name);
// }
// int main(){
//     char first[] = "ab";
//     char last[] = "ab";
//     printf("%d",strcmp(first,last));
// }
// int main(){
//     char str[100];
//     char ch;
//     int i = 0 ; 
//     while(ch != '\n'){
//         scanf("%c",&ch);
//         str[i] = ch;
//         i++;
//     }
//     str[i] = '\0';
//     puts(str);
// }
// Quetion :- find the salted form of password entered by user if the salt is 123 & added at the end 
// void salted(char password[]);
// int main(){
//     char str[100];
//     scanf("%s",&str);
//     salted(str);
// }
// void salted(char password[]){
//     char salt[] = "123";
//     char new_str[200];
//     strcpy(new_str,password);
//     strcat(new_str,salt);
//     puts(new_str);
// }
// Question: write a function name slice , which take string as input and return a slice string from index n to m
// void slice(char str[]);
// int main(){
//         char str[100];
//         gets(str);
//         slice(str);
// }
// void slice(char str[]){
//     int n,m;
//     scanf("%d %d",&n,&m);
//     for(int i = n ; i <= m ; i++ ){
//         printf("%c",str[i]);
//     }
// }
// Question:- write a function to count the occurence of vowel in a string
// int count(char str[]);
// int main(){
//     char str[100];
//     scanf("%s",&str);
//     printf("Vowels are %d",count(str));
// }
// int count(char str[]){
//     int count1 = 0;
//     for(int i = 0 ; str[i] != '\0' ; i++){
//         if(str[i] == 'a'||str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
//         count1++;
//     }
//     }
//     return count1;
// }
// int main(){
//     int a = printf("str");
//     printf("%d",a);
// }
// question:  
// void vowel_lower_upr(char arr[],int len);
// int main(){
//     char arr[100];
//     fgets(arr,100,stdin);
//     int len = strlen(arr);
//     // for(int i = 0 ; i < len ; i++){
//     //     if(arr[i] >= 65 && arr[i] <= 90){
//     //         arr[i] += 32; 
//     //     }else if(arr[i] >= 97 && arr[i] <= 122){
//     //         arr[i] -= 32;
//     //     }
//     // }
//     // printf("%s",arr);
//     vowel_lower_upr(arr,len);
// }
// void vowel_lower_upr(char arr[],int len){
//     for(int i = 0 ; i < len ; i++){
//         if (arr[i] == 'a' || arr[i]=='e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u'){
//         arr[i] -= 32;
//         }else if(arr[i] == 'A' || arr[i]=='E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')
//             arr[i] += 32;
//     }
//     printf("%s",arr);
// }
// #include <stdio.h> 
// #include <string.h> 
//  int main() { 
//     char str[] = "development"; 
//     char c = 'e'; 
//     printf("%ld", strrchr(str, c) - str); 
//     return 0; 
// } 
// void removeduplicate(char str[]){
//     int len = strlen(str);
//     if(len<2){
//         return;
//     }
//     int tail = 1;

//     for(int i = 1 ; i < len ;i++){
//         int j;
//         for(j = 0 ;j < tail ;j++){
//             if(str[i]==str[j]){
//                 break;
//             }
//         }
//         if(tail == j){
//             str[tail] = str[i];
//             tail++;
//         }   
//     }
//     str[tail] = '\0';
// }
// int main(){
//     char str[100];
//     fgets(str,sizeof(str),stdin);
//     removeduplicate(str);
//     printf("%s",str);
// }
// You are using GCC
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     fgets(str,100,stdin);
//     int len = strlen(str);
//     int vowel = 0;
//     for(int i = 0 ; i < len ; i++){
//         if(str[i] == 'a' ||str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
//             vowel++;
//         }
//     }
//     int cons = len - vowel;
//     printf("Total number of characters: %d\n",len);
//     printf("Number of vowels: %d\n",vowel);
//     printf("Number of consonants: %d",cons);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[100];
//     printf("enter element in array: ");
//     for(int i = 0 ; i < n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     int ele,nele;
//     printf("enter ele and nele: ");
//     scanf("%d %d",&ele,&nele);
    
//     int idx = 0;
//     for(int i = 0 ; i < n ;i++){
//         if(arr[i] == ele){
//             idx = i;
//             // break;
//         }
//     }
//     n++;
//     for(int i = n - 1; i > idx ; i--){
//         arr[i] = arr[i-1];
//     }
//     arr[idx+1] = nele;
//     for(int i = 0 ; i < n ; i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     int e;
//     scanf("%d",&e);
//     for(int i = 0 ; i < n; i++){
//         if(arr[i] == e) continue;
//         else printf("%d ", arr[i]);
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n][n];
//     int m , new;
//     int indexi = 0;
//     int indexj = 0;
//     for(int i = 0 ; i<n ; i++){
//         for(int  j = 0 ; j < n ; j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     scanf("%d %d",&m,&new);
//     for(int i = 0 ; i<n ; i++){
//         for(int  j = 0 ; j < n ; j++){
//             if(arr[i][j] == m){
//                 indexi = i;
//                 indexj = j;
//             }
//         }
//     }
//     arr[indexi][indexj] = new;
//     for(int i = 0 ; i<n ; i++){
//         for(int  j = 0 ; j < n ; j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     int count = 0;
//     for(int i = 0 ; i < n ;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i = 0 ; i < n/2 ;i++){
//         if(arr[i] == arr[n-1-i]){
//             count = 1;
//         }else{
//             count = 0;
//         }
//     }
//     if(count){
//         printf("yes this is palindrom number");
//     }else{
//         printf("sorry , this is not");
//     }   
// }
// int isprime(int n){
//     for(int i = 2 ; i <= n/2 ; i++){
//         if(n%i == 0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int count = 0;
//     for(int i = 2 ; i < n ; i++){
//         if(isprime(i)){
//             printf("%d ",i);
//             count++;
//         }
//     }
//     printf("\n%d",count);
// }
// int main(){
//     int n,a =10,k,count = 0;
//     scanf("%d",&n);
//     int original_n = n;
//     while(n>0){
//         n = n / 10;
//         count++;
//     }
//     n = original_n;
//     for(int i = 0 ; i < count ; i++){
//         k = n % 10;
//         if(k < a){
//             a = k;
//         }
//         n = n / 10;
//     }
//     printf("%d ",count);
//     printf("%d",a);
// }
// #include <stdio.h>
// #include <math.h>

// int isArmstrong(int num) {
//     int originalNum, remainder, n = 0, result = 0;

//     originalNum = num;

//     // store the number of digits of num in n
//     while (originalNum != 0) {
//         originalNum /= 10;
//         ++n;
//     }

//     originalNum = num;

//     // calculate the result
//     while (originalNum != 0) {
//         remainder = originalNum % 10;
//         result += pow(remainder, n);
//         originalNum /= 10;
//     }

//     // check if num is an Armstrong number
//     if (result == num)
//         return 1;
//     else
//         return 0;
// }

// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (isArmstrong(num))
//         printf("%d is an Armstrong number.\n", num);
//     else
//         printf("%d is not an Armstrong number.\n", num);

//     return 0;
// }
// int main(){
//     int n,product = 1 , sum = 0;
//     scanf("%d",&n);
//     while(n>0){
//         sum += n % 10;
//         product *= n % 10; 
//         n = n / 10;
//     }
//     if(sum == product){
//         printf("it is a spy number");
//     }else{
//         printf("it is not spy number");
//     }
// }
// int sorting(int *arr,int n){
//     int temp = 0;
//     for(int i = 0 ; i< n-1 ; i++){
//         for(int j = 0 ; j < n-1-i ; j++){
//             if(arr[j] > arr[j+1]){
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0 ; i<n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     sorting(arr,n);
//     for(int i = 0 ; i<n ; i++){
//         printf("%d ",arr[i]);
//     }   
// }
// quetion of etp
// int main(){
//     int n,sum=0;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i = 0 ; i < n/2 ; i++){
//         sum += arr[i];
//     }
//     printf("%d",sum);
// }
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char a[25],b[25];
    scanf("%s %s",a,b);
    if(strcmp(a,b) == 0){
        printf("Title match\n");
        for(int i = 0 ; a[i] != '\0';i++){
            a[i] = toupper(a[i]);
        }
        printf("%s",a);
    }else{
        printf("Title doesn't match");
        for(int i = 0 ; a[i] != '\0';i++){
            a[i] = tolower(a[i]);
        }
        for(int i = 0 ; b[i] != '\0';i++){
            b[i] = tolower(b[i]);
        }
        printf("\n%s\n%s",a,b);
    }
    
}