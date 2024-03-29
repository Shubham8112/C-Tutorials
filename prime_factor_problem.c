program to find the no. prime factor of a given integer and
calculate the difference between the number and the lowest prime factor
example :- input--30
output:-3  30 .......explaination:- no of prime factor is 3 (2,3,5) and difference between no (30) and lowest prime factor (2) is 28
int main(){
    int n;
    scanf("%d",&n);
    int sum=0,step;
    for (int i=0; i<n;i++){
        while(n%i==0){
            sum+=i;
        }
        sum++;
    }
    printf("prime ")

}
