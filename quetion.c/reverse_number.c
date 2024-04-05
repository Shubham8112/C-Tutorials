// Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
// Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.
#include<stdio.h>
int main(){
    int sum = 0;
    for (int i = 0; i <= 8 ; i++){
        for(int j=1; j <= 4; j++){
            sum += i * j;
            if (sum > 30){
                break;
            }
        }
    }
    printf("Sum: %d",sum);
}
git init
git add *
git commit -m "some changes."
git push origin main