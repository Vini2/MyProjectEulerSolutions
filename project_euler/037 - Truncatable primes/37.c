#include <stdio.h>

int i, num, num1, a, b, c, n=0, prime, trunc_from_end, trunc_from_beginning, sum=0;

main(){

    for(i=11; i<1000000; i++){

        trunc_from_beginning = 0;
        trunc_from_end = 0;

//Check whether truncatable prime from end
        num1=0;
        num = i;
        prime = 1;
        while(prime && num!=0){
            if(num==1 || num==9){prime=0;}

            for(a=2; a<num; a++){ //Check whether prime
                if(num%a==0){
                    prime = 0;
                    break;
                }
            }
            num1=num;
            num/=10;
        }
        if(prime){
            trunc_from_end = 1;
        }

//Check whether truncatable prime from beginning
        num1=0;
        num = i;
        prime = 1;
        while(prime && num!=0){
            if(num==1 || num==9){prime=0;}

            for(a=2; a<num; a++){ //Check whether prime
                if(num%a==0){
                    prime = 0;
                    break;
                }
            }
            num1=num;
            if(num<10){
                num/=10;
            }
            else if(num<100){
                b=num;
                c=num/10;
                num = b-(c*10);
            }
            else if(num<1000){
                b=num;
                c=num/100;
                num = b-c*100;
            }
            else if(num<10000){
                b=num;
                c=num/1000;
                num = b-c*1000;
            }
            else if(num<100000){
                b=num;
                c=num/10000;
                num = b-c*10000;
            }
            else if(num<1000000){
                b=num;
                c=num/100000;
                num = b-c*100000;
            }
            if(num==1 || num==9){prime=0;}
        }
        if(prime){
            trunc_from_beginning = 1;
        }

//Check whether "i" is a truncatable prime
        if(trunc_from_beginning && trunc_from_end){
            printf("Truncatable prime - %d\n", i);
            sum+=i;
            ++n;
        }

        if(n==11){
            break;
        }

    }

printf("Sum = %d\n", sum);

//Sum = 748317

}

