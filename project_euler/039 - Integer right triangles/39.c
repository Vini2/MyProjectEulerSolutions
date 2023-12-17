#include <stdio.h>

int p,a, solution_max=0, final_p=0;

main(){

    for(p=2; p<=1000; p++){
        int solution_num = 0;
         for(a=1; a<(p/3); a++){
            if(((p*p)-(2*p*a))%((2*p)-(2*a))==0){ //count number of solutions for a given p value
                ++solution_num;
            }
         }
         if(solution_num>solution_max){ //check maximum number of solutions
            solution_max = solution_num;
            final_p = p;
         }
    }

    printf("Value of p for which the number of solutions is maximised = %d\n", final_p);

}

