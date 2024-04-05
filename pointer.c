 #include <stdio.h>
// int main(){
//     int age = 22;
//     int *ptr = &age;
//     // printf("%p\n",&age);
//     // address of variable
//     printf("%u\n",&age);
//     printf("%u\n",ptr);
//     printf("%u\n",&ptr);
//     // value
//     printf("%d\n",*ptr);
//     printf("%d\n",age);
//     printf("%d\n",*(&ptr));
//     printf("%d\n",*(&age));
// }
// int main(){
//     int x;
//     int *ptr;
//     ptr = &x;
//     *ptr = 0;
//     printf("x =%d\n",x);
//     printf("*ptr = %d\n",*ptr);
//     *ptr += 5;
//     printf("%d\n",x);
//     printf("%d\n",*ptr);
//     // *ptr++;
//     printf("%d\n",*ptr);
//     printf("%d\n",ptr);

// }
// int perfectcube(int n);
// int main(){
//     int n;
//     scanf("%d",&n);
//     perfectcube(n);
// }
// int perfectcube(int n){
// for(int i = 1 ; i <= n ; i++){
//    if(n / i*i*i == 0){
//     printf("perfect root");
//    }
//    else{
//     printf("not a perfect root ");
//    }

// }
// }
// int shift(int *a,int *b ,int *c);
// int main(){
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     printf("%d %d %d\n",a,b,c);
//     // printf("%d %d %d",c,a,b);
//     shift(&c,&a,&b);
//     printf("%d %d %d\n",a,b,c);


// }
// int shift(int *a,int *b,int *c){
//     int temp = *a;
//     *a = *b;
//     *b = *c;
//     *c = temp;

// }
// void even(int *a ,int *b){
//     for(int i = *a ; i<=*b;i++){
//         if (i % 2 == 0){
//             printf("%d",i);
//         }
//         else{
//             printf("\n");
//         }
//     }

// }
// int main(){
//     int a , b;
//     scanf("%d %d",&a,&b);
//     even(&a,&b);


// }
// void dowork(int a ,int b,int *sum,int *prod);//declaration
// int main(){
//     int a,b,sum,prod;
//     scanf("%d %d",&a,&b);
//     dowork( a,b,&sum, &prod);//call by reference

//     printf("%d %d",sum,prod);
// }
// void dowork(int a,int b,int *sum,int *prod){
//     *sum = a+b;
//     *prod = a*b;
// }
// write a code print armstrong number 
// int arm(int n);
// int main(){
//     int n;
//     scanf("%d",&n);
//     arm(n);
//     // printf("%d",n);

// }
// int arm(int n){
//     int h = 0, k = 0;
//     for(int i = 0; i < 1; i++){
//         k += n % 10;
//         k = k * k;
//         // printf("%d\n",k);
//     }
//     for(int i= 1; i <= 1000 ;i++){
//         h += n % 10;
//         n = n / 10;
//     }
//         // printf("%d\n",h);
//         if (k == h){
//             printf("armstrong number");
//         }else
//         printf("not a armstrong number");
    
// }
// void A(int *n);
// int main(){
//     int *n == 14;

// } 
// void A(int *n){
//     int k = 15;
//     A(&k);
// }
#include<stdio.h>
int sumOfEven(int n,int m);
int main(){
    int l,r;
    scanf("%d %d",&l,&r);
    sumOfEven(l,r);
    int k = 0;
}
int sumOfEven(int n,int m){
    // int k = 0;
    for (int i = n; i<m ;i++){
        int k = 0;
        if (n % 2 == 0){
            k += n;
        }
    }
    printf("%d",k);
}