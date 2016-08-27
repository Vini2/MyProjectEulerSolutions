#include<stdio.h>
#include<stdint.h>

int i,j,k,count1=0;

main()
{

    for(i=1; i<=100; i++)
    {
        for(j=1; j<=100; j++)
        {
            int n = i;
            int r = j;

            if(r>(n-r))
            {
                int a=r+1;
                int64_t fac=1;
                while(a<=i)
                {
                    fac*=a;
                    ++a;
                }

                int a1=n-r;
                int64_t fac1=1;
                while(a1>0)
                {
                    fac1*=a1;
                    --a1;
                }
                printf("1  %ld\n", fac/fac1);

                if(fac/fac1>1000000){
                    ++count1;
                }

            }
            else{

                int a=n-r+1;
                int64_t fac=1;
                while(a<=i)
                {
                    fac*=a;
                    ++a;
                }

                int a1=r;
                int64_t fac1=1;
                while(a1>0)
                {
                    fac1*=a1;
                    --a1;
                }

                printf("2  %I64d\n", fac/fac1);

                if(fac/fac1>1000000){
                    ++count1;
                }
            }

        }

    }

    printf("%d\n", count1);


}
