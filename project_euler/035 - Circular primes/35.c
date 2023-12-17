#include <stdio.h>
#include <math.h>

int n,prime,b,max=0,circularPrime=0;

main(){

    for(n=101; n<1000000; n+=2){

        if(n<1000){
            int num = n;
            int i=0;
            if(checkPrime(num)){
                while(i<3){
                    int num1 = num/100;         //Rotate digits
                    num = (num%100)*10+num1;    //New rotated number num
                    if(checkPrime(num)){        //Check whether num is prime
                        ++i;
                    }else{i=4;continue;}
                }
                if(i==3){
                    printf("%d\n", n);
                    ++circularPrime;
                }
            }
        }else if(n<10000){
            int num = n;
            int i=0;
            if(checkPrime(num)){
                while(i<4){
                    int num1 = num/1000;
                    num = (num%1000)*10+num1;
                    if(checkPrime(num)){
                        ++i;
                    }else{i=5;continue;}
                }
                if(i==4){
                    printf("%d\n", n);
                    ++circularPrime;
                }
            }
        }else if(n<100000){
            int num = n;
            int i=0;
            if(checkPrime(num)){
                while(i<5){
                    int num1 = num/10000;
                    num = (num%10000)*10+num1;
                    if(checkPrime(num)){
                        ++i;
                    }else{i=6;continue;}
                }
                if(i==5){
                    printf("%d\n", n);
                    ++circularPrime;
                }
            }
        }else if(n<1000000){
            int num = n;
            int i=0;
            if(checkPrime(num)){
                while(i<6){
                    int num1 = num/100000;
                    num = (num%100000)*10+num1;
                    if(checkPrime(num)){
                        ++i;
                    }else{i=7;continue;}
                }
                if(i==6){
                    printf("%d\n", n);
                    ++circularPrime;
                }
            }
        }

    }

    printf("Number of circular primes below one million - %d\n", circularPrime+13);

}

int checkPrime(int num)  // Function to check whether a number is prime
{
    prime = 1;
    for(b=2; b<num; b++)
    {
        if(num==2)
        {
            prime = 1;
            break;
        }
        else if(num%b==0)
        {
            prime = 0;
            break;
        }
    }

    if(prime)
        return 1;
    else
        return 0;
}




