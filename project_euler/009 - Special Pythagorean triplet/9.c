#include<stdio.h>
int main(void){
    long long int a,b,c;

    for(a=1;a<1000;a++){
        for(b=1;b<1000;b++){
            for(c=1;c<1000;c++){
                int k = a+b+c;
                //printf("%d\n", k);
                if(((a*a)+(b*b)==(c*c))&&(k==1000)){
                    printf("%d", a*b*c);
                    return 0;
                }
            }
        }
    }

}
