#include<stdio.h>
int main(void){
    unsigned long long int i,c,high=0;

    for(i=1000000; i>837797; i--){
        int a=i;
        int b=0;

        while(a!=1){

            b++;

            if(a%2==0){
                a=a/2;
            }
            else{
                a=(a*3)+1;
            }
            if (a >= 1000000) continue;

            printf("%d\n", a);

            if(a<0)
                break;
        }
        if(b>high){
            high=b;
            c=i;
        }
    }

    printf("Highest val = %d\n", high);
    printf("Starting value i = %d\n", c);


}
