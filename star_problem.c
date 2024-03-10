#include <stdio.h>
int main(){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        for(int j = 0 ; j < n+1 ; j++){
            printf("*");
        }
        printf("/n");
    }
}