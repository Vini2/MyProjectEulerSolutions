#include<stdio.h>
int main(void){
    long long int i,n,no=0;

    for(n=12368;;n++){
            no = n*(n+1)/2;
            printf("%d\n", no);
            int a=0;

        for(i=1; i<=no; i++){
            if(no%i==0){
                ++a;

                if(a>500){
                    printf("....%d\n", no);
                    return 0;
                }

            }
        }
    }

}
