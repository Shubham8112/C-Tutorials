// Single File Programming Question
// Problem Statement



// ﻿In a team-oriented context, you are tasked with managing a rearrangement process for team members represented by three integers: a, b, and c. 



// Create a program that takes initial input values for a, b, and c and displays them. Then, perform a shift operation by moving a to b, b to c, and c to a using a call-by-reference function and print the updated values after the shift.



// Function Specifications: int shift(int *a, int *b, int *c)

// Input format :
// The input consists of three space-separated integers a, b, and c representing the team members.

// Output format :
// The first line displays the values of the team members before shifting, separated by a space.

// The second line displays the values of the team members after shifting, separated by a space.



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ a, b, c ≤ 1000

// Sample test cases :
// Input 1 :
// 15 41 23
// Output 1 :
// 15 41 23
// 23 15 41
// Input 2 :
// 561 892 784
// Output 2 :
// 561 892 784
// 784 561 892
// solution:-
#include <stdio.h>
int shift(int *a,int *b ,int *c);
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d %d %d\n",a,b,c);
    // printf("%d %d %d",c,a,b);
    shift(&a,&b,&c);
    printf("%d %d %d\n",b,c,a);


}
int shift(int *a,int *b,int *c){
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;

}