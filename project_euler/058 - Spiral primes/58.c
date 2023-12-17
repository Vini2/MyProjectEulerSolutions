#include<stdio.h>
#include<math.h>

int i,j;

main(){

    int prime_nums = 0;

    for(i=1; i>0; i++){

        int diagonal_nums = 4*i+1;      //Calculate the no. of numbers along both diagonals

        int a = ((2*i)+1)*((2*i)+1);    //Calculate the numbers of the 4 corners of the layer
        int b = a-(2*i);
        int c = a-(4*i);
        int d = a-(6*i);

        if(isPrime(b))                  //Count the number of primes
            ++prime_nums;
        if(isPrime(c))
            ++prime_nums;
        if(isPrime(d))
            ++prime_nums;

        float f = prime_nums/(float)diagonal_nums*100;  //Calculate the ratio of primes along both diagonals

        printf("i = %d    f = %f\n", i, f);

        if(f<10.0){
            printf("\nf = %f\n", f);
            printf("i = %d\n", i);
            printf("Side length of the square spiral = %d\n", (2*i+1));
            break;
        }
    }

}

int isPrime(int num)  // Function to check whether a number is prime
{
    int j;
    int prime = 1;

    if (num==2){
        prime = 1;
    }
    else{
        for (j=2; j<=sqrt(num);j++){
            if (num % j == 0) {
                prime = 0;
                break;
            }
        }
    }
  return prime;
}

