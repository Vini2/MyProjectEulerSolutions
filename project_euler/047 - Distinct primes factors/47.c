#include <stdio.h>

int i,j,b,prime,n,m,num_1,num_2;


main()
{

    for(i=130000; i<140000; i++)
    {

        if(isHaving4(i)){
            if(isHaving4(i+1)){
                if(isHaving4(i+2)){
                    if(isHaving4(i+3)){
                        printf("%d\n", i);
                        printf("%d\n", i+1);
                        printf("%d\n", i+2);
                        printf("%d\n", i+3);
                        printf("First number of the first four consecutive integers to have four distinct prime factors = %d\n", i);
                        break;
                    }
                }
            }
        }

    }

}

int isHaving4(int i1){ //Function which checks whether the number has four distinct prime factors
    n=0;
    for(j=2; j<i1; j++){

        if(i1%j==0){
            if(checkPrime(j)){
                ++n;
            }
        }
    }
    if(n==4){
        return 1;

    }else{return 0;}
}


int checkPrime(int num)  //Function which checks whether a number is prime
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
