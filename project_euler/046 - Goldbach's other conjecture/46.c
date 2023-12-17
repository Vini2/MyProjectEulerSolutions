#include <stdio.h>
#include <math.h>

int b, i, j, k, n;

main()
{

    for(i=9; i>0; i+=2)
    {
        n=0;

        if(checkPrime(i))
            continue;
        else
        {
            for(j=3; j<i; j+=2)
            {
                if(!checkPrime(j))
                    continue;
                else
                {
                    for(k=1; k<i; k++)
                    {
                        if(j+2*k*k==i)  //check whether the composite number can be written as the sum of a prime and twice a square
                        {
                            ++n;
                            break;
                        }


                    }
                }
            }

        }

        if(n==0)
        {
            printf("The smallest odd composite that cannot be written as the sum of a prime and twice a square - %d\n", i);
            break;
        }

    }

}

int checkPrime(int num)  // Function to check whether a number is prime
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

int isSquareNum(int number)
{

    float squareNumResult = sqrt(number); //check whether the number is a pentagonal number
    int squareNumResult1 = (int)squareNumResult;
    float squareNumResult2 = (int)squareNumResult1;
    float dif = squareNumResult - squareNumResult2;

    if(dif==0.0)
        return 1;
    else
        return 0;
}




