#include<stdio.h>
#include<math.h>
#include<stdint.h>

int64_t i,j,k,l,m;

main()
{

    for(i=13; i<10000; i+=2)
    {
        printf("i=%I64d\n", i);
        for(j=i+2; j<10000; j+=2)
        {
            printf("j=%I64d\n", j);
            if(concat(i,j))
            {
                for(k=j+2; k<10000; k+=2)
                {
                    printf("k=%I64d\n", k);
                    if(concat(i,k)&&concat(j,k))
                    {
                        for(l=k+2; l<10000; l+=2)
                        {
                            printf("l=%I64d\n", l);
                            if(concat(i,l)&&concat(j,l)&&concat(k,l))
                            {
                                for(m=l+2; m<10000; m+=2)
                                {
                                    printf("m=%I64d\n", m);
                                    if(concat(i,m)&&concat(j,m)&&concat(k,m)&&concat(l,m))
                                    {
                                        goto label1;
                                    }
                                    else
                                        continue;
                                }

                            }
                            else
                                continue;
                        }

                    }
                    else
                        continue;
                }

            }
            else
                continue;

        }
    }

label1:
    printf("\ni=%I64d, j=%I64d, k=%I64d, l=%I64d, m=%I64d\nSum = %I64d\n", i, j, k, l, m, (i+j+k+l+m));

}


int concat(int64_t num1, int64_t num2)  //Function to check whether the concatenated numbers are also primes
{

    if(isPrime(num1)&&isPrime(num2))    //Check whether the 2 numbers are prime
    {

        int concatPrime1 = 0;
        int concatPrime2 = 0;
        int64_t number1;
        int64_t number2;

        if(num1<10)
            number1 = num2*10+num1;
        else if(num1<100)
            number1 = num2*100+num1;
        else if(num1<1000)
            number1 = num2*1000+num1;
        else if(num1<10000)
            number1 = num2*10000+num1;
        else if(num1<100000)
            number1 = num2*100000+num1;

        if(isPrime(number1))            //Check whether the concatenated number is a prime
        {
            concatPrime1 = 1;
        }


        if(num2<10)
            number2 = num1*10+num2;
        else if(num2<100)
            number2 = num1*100+num2;
        else if(num2<1000)
            number2 = num1*1000+num2;
        else if(num2<10000)
            number2 = num1*10000+num2;
        else if(num2<100000)
            number2 = num1*100000+num2;

        if(isPrime(number2))            //Check whether the concatenated number is a prime
        {
            concatPrime2 = 1;
        }

        if(concatPrime1&&concatPrime2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }

}



int isPrime(int64_t num)  // Function to check whether a number is prime
{
    int j;
    int prime = 1;

    if (num==2)
    {
        prime = 1;
    }
    else
    {
        for (j=2; j<=sqrt(num); j++)
        {
            if (num % j == 0)
            {
                prime = 0;
                break;
            }
        }
    }
    return prime;
}


