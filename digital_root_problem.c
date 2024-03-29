// question :-calcute the digital root and also find the step 
// example:- user input :-123 and the expected output :- 1+2+3=6
#include <stdio.h>
int main(){
    int input;
    scanf("%d",&input);
    int dr = input;
    int step=0;
    while(dr>9){
        int sum=0;
        while(dr>0){
            sum+=dr%10;
            dr/=10;
        }
        dr=sum;
        step++;
    }
    printf("digital root: %d\n",dr);
    printf("no of steps: %d",step);
    return 0;
// }
// #include <stdio.h>
// this question was come in my 1st CA
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
int main(){
    int input;
    scanf("%d",&input);
    int dr=input;
    int step = 0;
    for (int i = 1; i < input ; i++){
        int sum = 0;
        while(input>0){
            sum += dr%10;
            dr/=10;
        }
        dr=sum;
        step++;
    }
    printf("digital root :",dr);
    printf("step : ",step);
}