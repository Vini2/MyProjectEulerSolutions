#include <stdio.h>

int main (void){

    int i,j,k,m;

    for(i=9; i>0; i--){
        for(j=9; j>=0; j--){
            for(k=9; k>=0; k--){

                int a = (i*100001)+(j*10010)+(k*1100);

                for(m=999; m>=100; m--){

                    if(a%m==0){
                        int d = a/m;

                        if(d>=100 && d<=999){
                            printf("Largest palindrome with 3 digit multipliers is : %d\n", a);
                            return 1;
                        }

                    }

                }
            }
        }
    }

}
