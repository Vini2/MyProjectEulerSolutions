#include<stdio.h>
int main(void){
    long long int i,n;
    long long sum=0;

    for(n=3;n<2000000;n+=2){

        for(i=3; i<=n; i+=2){
            if(n%i==0){
                printf("Not a prime number.......... %d\n", n);
                break;
            }
        }
        if(i==n){
            printf("Prime Number %d\n", n);

            sum+=n;
        }
    }
printf("SUM : %d", (sum+2)); //1179908154
return 0;
}
