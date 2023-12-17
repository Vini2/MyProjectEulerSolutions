#include <stdio.h>

main()
{
    int a=40;
    double fac=1.0;
    while(a>0){             //Calculate factorial 40
        fac*=a;
        --a;
    }
    printf("40! = %lf\n", fac);

    int a1=20;
    double fac1=1.0;
    while(a1>0){            //Calculate factorial 20
        fac1*=a1;
        --a1;
    }

    printf("20! = %lf\n", fac1);

    printf("\nNo. of routes in a 20x20 grid = (40!)/(20!)^2 = %lf\n", fac/fac1/fac1);

}
