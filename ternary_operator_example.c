#include <stdio.h>
int main(){
    float m1,n1;
    float m2,n2;
    scanf("%f%f",&m1,&n1);
    scanf("%f%f",&m2,&n2);
    float totalm1,totalm2;
    totalm1=m1+n1/2;
    totalm2=m2+n2/2;
    printf("Crop 1: %.2f",totalm1);
    printf("Crop 2: %.2f",totalm2);
    (totalm1>totalm2)?printf("Crop 1 had the highest average yield"):printf("Crop 2: had the highest average yield ");
    return 0;
}
