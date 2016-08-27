#include <stdio.h>
#include <stdint.h>

int64_t a[10] = {0};
int64_t g, sum=0;

main()
{




    for(a[0]=0; a[0]<10; a[0]++)
    {
        for(a[1]=0; a[1]<10; a[1]++)
        {
            if(a[0]==a[1])
                continue;
            else
            {
                for(a[2]=0; a[2]<10; a[2]++)
                {
                    if(a[0]==a[2]||a[1]==a[2])
                        continue;
                    else
                    {
                        for(a[3]=0; a[3]<10; a[3]++)
                        {
                            if(a[0]==a[3]||a[1]==a[3]||a[2]==a[3])
                                continue;
                            else
                            {
                                for(a[4]=0; a[4]<10; a[4]++)
                                {
                                    if(a[0]==a[4]||a[1]==a[4]||a[2]==a[4]||a[3]==a[4])
                                        continue;
                                    else
                                    {
                                        for(a[5]=0; a[5]<10; a[5]++)
                                        {
                                            if(a[0]==a[5]||a[1]==a[5]||a[2]==a[5]||a[3]==a[5]||a[4]==a[5])
                                                continue;
                                            else
                                            {
                                                for(a[6]=0; a[6]<10; a[6]++)
                                                {
                                                    if(a[0]==a[6]||a[1]==a[6]||a[2]==a[6]||a[3]==a[6]||a[4]==a[6]||a[5]==a[6])
                                                        continue;
                                                    else
                                                    {
                                                        for(a[7]=0; a[7]<10; a[7]++)
                                                        {
                                                            if(a[0]==a[7]||a[1]==a[7]||a[2]==a[7]||a[3]==a[7]||a[4]==a[7]||a[5]==a[7]||a[6]==a[7])
                                                                continue;
                                                            else
                                                            {
                                                                for(a[8]=0; a[8]<10; a[8]++)
                                                                {
                                                                    if(a[0]==a[8]||a[1]==a[8]||a[2]==a[8]||a[3]==a[8]||a[4]==a[8]||a[5]==a[8]||a[6]==a[8]||a[7]==a[8])
                                                                        continue;
                                                                    else
                                                                    {
                                                                        for(a[9]=0; a[9]<10; a[9]++)
                                                                        {
                                                                            if(a[0]==a[9]||a[1]==a[9]||a[2]==a[9]||a[3]==a[9]||a[4]==a[9]||a[5]==a[9]||a[6]==a[9]||a[7]==a[9]||a[8]==a[9])
                                                                                continue;
                                                                            else
                                                                            {   //Calcuate 0-9 pandigital number
                                                                                g = (a[0]*1)+(a[1]*10)+(a[2]*100)+(a[3]*1000)+(a[4]*10000)+(a[5]*100000)+(a[6]*1000000)+(a[7]*10000000)+(a[8]*100000000)+(a[9]*1000000000);

                                                                                if(checkSubStringDivisibility(g)){
                                                                                    sum+=g;     //Calcuate sum
                                                                                    printf("%I64d\n", g);
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

            }

        }


    }

    printf("\nSum of all 0 to 9 pandigital numbers with this sub-string divisibility property = %I64d\n", sum);
}


int checkSubStringDivisibility(int64_t n)   //Function to check sub-string divisibility
{
    int64_t m = n;
    while(m>1000)
    {
        int a8 = m%1000;
        m/=10;
        int a7 = m%1000;
        m/=10;
        int a6 = m%1000;
        m/=10;
        int a5 = m%1000;
        m/=10;
        int a4 = m%1000;
        m/=10;
        int a3 = m%1000;
        m/=10;
        int a2 = m%1000;

        if(a2%2==0&&a3%3==0&&a4%5==0&&a5%7==0&&a6%11==0&&a7%13==0&&a8%17==0)
            return 1;
        else
            return 0;

    }

}


