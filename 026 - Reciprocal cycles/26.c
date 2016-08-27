#include <stdio.h>

int i, d, j, num, cycle_length = 0, high = 0;

main(){

    for(num=1; num<1000; num++){

        int rems[1000]={0};

        int position;

        int rem = 1%num;
        int eq=1;
        int b=0;

        while (rem != 0 && eq == 1){

            int a = rem*10;
            rem = a%num;

            for(j=0; j<num; j++){
                while(rems[j]==rem){ //checks whether recurring
                    eq = 0;
                    position = j;
                    break;
                }
            }

            if(eq){
                rems[b]=rem;
                b++;
            }
            else{
                high = b - position; //calculate the length of the recurring cycle

                if(cycle_length<high){ //determine the longest recurring cycle
                    cycle_length = high;
                    d = num;
                }
            }


        }

    }

printf("d < 1000 for which 1/d contains the \nlongest recurring cycle in its decimal fraction part = %d\n", d);
printf("\nLength of recurring cycle = %d\n", cycle_length);

}
