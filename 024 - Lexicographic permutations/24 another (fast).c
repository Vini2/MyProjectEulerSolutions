#include <stdio.h>

int n=0;
int a[10] = {0};

main()
{

    for(a[0]=0; a[0]<10; a[0]++)
    {
        for(a[1]=0; a[1]<10; a[1]++)
        {
            if(a[0]==a[1])
                continue;
            else
                for(a[2]=0; a[2]<10; a[2]++)

                    if(a[0]==a[2]||a[1]==a[2])
                        continue;
                    else
                        for(a[3]=0; a[3]<10; a[3]++)
                            if(a[0]==a[3]||a[1]==a[3]||a[2]==a[3])
                                continue;
                            else
                                for(a[4]=0; a[4]<10; a[4]++)
                                    if(a[0]==a[4]||a[1]==a[4]||a[2]==a[4]||a[3]==a[4])
                                        continue;
                                    else
                                        for(a[5]=0; a[5]<10; a[5]++)
                                            if(a[0]==a[5]||a[1]==a[5]||a[2]==a[5]||a[3]==a[5]||a[4]==a[5])
                                                continue;
                                            else
                                                for(a[6]=0; a[6]<10; a[6]++)
                                                    if(a[0]==a[6]||a[1]==a[6]||a[2]==a[6]||a[3]==a[6]||a[4]==a[6]||a[5]==a[6])
                                                        continue;
                                                    else
                                                        for(a[7]=0; a[7]<10; a[7]++)
                                                            if(a[0]==a[7]||a[1]==a[7]||a[2]==a[7]||a[3]==a[7]||a[4]==a[7]||a[5]==a[7]||a[6]==a[7])
                                                                continue;
                                                            else
                                                                for(a[8]=0; a[8]<10; a[8]++)
                                                                    if(a[0]==a[8]||a[1]==a[8]||a[2]==a[8]||a[3]==a[8]||a[4]==a[8]||a[5]==a[8]||a[6]==a[8]||a[7]==a[8])
                                                                        continue;
                                                                    else
                                                                        for(a[9]=0; a[9]<10; a[9]++)
                                                                            if(a[0]==a[9]||a[1]==a[9]||a[2]==a[9]||a[3]==a[9]||a[4]==a[9]||a[5]==a[9]||a[6]==a[9]||a[7]==a[9]||a[8]==a[9])
                                                                                continue;
                                                                            else
                                                                            {

                                                                                n++; //Count the number of lexicographic permutations
                                                                                if(n==1000000)  //Determine the millionth lexicographic permutation
                                                                                {
                                                                                    goto label_print;
                                                                                }
                                                                            }


        }

    }

label_print:
    printf("The millionth lexicographic permutation of the digits 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9 - %d%d%d%d%d%d%d%d%d%d\n", a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}




