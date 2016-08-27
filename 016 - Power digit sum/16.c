#include <stdio.h>

main ()
{
    int i = 1, h = 0, sum = 0, a[1000] = {0};

    a[0] = 1;

    for (i = 1; i <= 1000; i++)
    {
        int j;
        int rem = 0;
        int p = 1;

        for (j = 0;  j <= h; j++)
        {
            p = (a[j]*2) + rem;
            a[j] = p % 10;
            rem = p / 10;

            if ( ( rem != 0 ) && ( j == h ) )
                h++;
        }
    }

    for (i = 0; i <= h; i++)
        sum += a[i];

    printf("Sum of the digits of the number 2^1000 = %d\n", sum);

}
