#include <stdio.h>
#include <stdint.h>

int n=0,i,present=1;
int a[9] = {0};
int64_t g,num,multiplicand,multiplier,product,sum=0;
int64_t b[10] = {0};

main()
{

    for(a[0]=1; a[0]<10; a[0]++)
    {
        for(a[1]=1; a[1]<10; a[1]++)
        {
            if(a[0]==a[1])
                continue;
            else
            {
                for(a[2]=1; a[2]<10; a[2]++)
                {
                    if(a[0]==a[2]||a[1]==a[2])
                        continue;
                    else
                    {
                        for(a[3]=1; a[3]<10; a[3]++)
                        {
                            if(a[0]==a[3]||a[1]==a[3]||a[2]==a[3])
                                continue;
                            else
                            {
                                for(a[4]=1; a[4]<10; a[4]++)
                                {
                                    if(a[0]==a[4]||a[1]==a[4]||a[2]==a[4]||a[3]==a[4])
                                        continue;
                                    else
                                    {
                                        for(a[5]=1; a[5]<10; a[5]++)
                                        {
                                            if(a[0]==a[5]||a[1]==a[5]||a[2]==a[5]||a[3]==a[5]||a[4]==a[5])
                                                continue;
                                            else
                                            {
                                                for(a[6]=1; a[6]<10; a[6]++)
                                                {
                                                    if(a[0]==a[6]||a[1]==a[6]||a[2]==a[6]||a[3]==a[6]||a[4]==a[6]||a[5]==a[6])
                                                        continue;
                                                    else
                                                    {
                                                        for(a[7]=1; a[7]<10; a[7]++)
                                                        {
                                                            if(a[0]==a[7]||a[1]==a[7]||a[2]==a[7]||a[3]==a[7]||a[4]==a[7]||a[5]==a[7]||a[6]==a[7])
                                                                continue;
                                                            else
                                                            {
                                                                for(a[8]=1; a[8]<10; a[8]++)
                                                                {
                                                                    if(a[0]==a[8]||a[1]==a[8]||a[2]==a[8]||a[3]==a[8]||a[4]==a[8]||a[5]==a[8]||a[6]==a[8]||a[7]==a[8])
                                                                        continue;
                                                                    else
                                                                    {   //Calculate 1-9 pandigital number
                                                                        g = (a[0]*1)+(a[1]*10)+(a[2]*100)+(a[3]*1000)+(a[4]*10000)+(a[5]*100000)+(a[6]*1000000)+(a[7]*10000000)+(a[8]*100000000);

                                                                        num = g;
                                                                        product = num%10000;
                                                                        num/=10000;
                                                                        multiplier = num%1000;
                                                                        num/=1000;
                                                                        multiplicand = num;

                                                                        check(multiplicand,multiplier,product);

                                                                        num = g;
                                                                        product = num%10000;
                                                                        num/=10000;
                                                                        multiplier = num%10000;
                                                                        num/=10000;
                                                                        multiplicand = num;

                                                                        check(multiplicand,multiplier,product);

                                                                        num = g;
                                                                        product = num%10000;
                                                                        num/=10000;
                                                                        multiplier = num%100;
                                                                        num/=100;
                                                                        multiplicand = num;

                                                                        check(multiplicand,multiplier,product);

                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                    }

                }


            }
        }
    }

    printf("\nSum of all products whose multiplicand/multiplier/product identity can be written as a 1 through 9 pandigital = %I64d\n", sum);

}


void check(int64_t multiplicand1, int64_t multiplier1, int64_t product1)
{
    present = 1;
    if(multiplicand1*multiplier1==product1)
    {
        for(i=0; i<10; i++)
        {
            if(b[i]==product1)
            {
                present = 0;
                break;
            }

        }
        if(present)
        {
            printf("%I64d  ----  %I64d * %I64d = %I64d\n", g,multiplicand1,multiplier1,product1);
            b[n] = product1;
            ++n;
            sum+=product1;
        }
    }

}



