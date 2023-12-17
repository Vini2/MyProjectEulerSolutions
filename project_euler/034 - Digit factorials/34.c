#include <stdio.h>

unsigned int factorial, factorial_sum, i, num, a, b, sum=0;

main(){

    for(b=3; b<10000000; b++){

        factorial_sum=0;
        num = 0;
        i=b;

        while(1){

            if(i<10){
                num = i;
                factorial_sum += fact(num);
                break;
            }
            else{
                num = i%10;
                i-=num;
                i/=10;
                factorial_sum += fact(num);
            }
        }

        if(factorial_sum == b){
            printf("OK - %d\n", b);
            sum+=b;
        }

    }

    printf("Sum of all numbers which are equal to the sum of the factorial of their digits = %d\n", sum);

}

int fact(int a){
    factorial=1;
    while(a>0){
        factorial=factorial*a;
        a--;
    }
    return factorial;
}
