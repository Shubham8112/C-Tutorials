#include <stdio.h>
// write a program to check if a student passed or failed.
// marks>30 is pass and mark<=is fail
// int main() {
//         int mark;
//         printf("enter number(0-100) : ");
//         scanf("%d",&mark);
//         if(mark >= 0 && mark <= 30) {
//                 printf("Fail \n");
//         } else if (mark > 30 && mark <= 100){
//                 printf("pass \n");
//         }else{
//             printf("wrong number");
//         }
// return 0;
// } 
//the above code condition in ternary operator
//  int main(){
//     int mark;
//     printf("enter number : ");
//     scanf("%d",&mark);
//     mark <= 30 ? printf("fail \n") : printf("pass \n");
// return 0;
//  }
// write a program to give grades to a student 
// mark<30 is c
// 30<= mark <70 is b
// 70<= mark <90 is A
// 90<= mark <100 is A
int main(){
    int mark;
    printf("enter mark: ");
    scanf("%d",&mark);
    if (mark<30)
    printf("c");
    else if (30<=mark<70)
    printf("B");
    else if (70<=mark<90)
    printf("A");
    else(90<= mark <=100)
    // printf("A+");
return 0;
}     