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