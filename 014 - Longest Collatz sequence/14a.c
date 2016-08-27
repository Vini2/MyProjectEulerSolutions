#include <stdio.h>

int numbers[1000000] = {0};

main(){
 int high_chain = 0;
 int high_num = 0;
 int chain_length = 0;
 int curr_num = 1000000;

 int i;
 for (i = 0; i < 1000000; i++)
  numbers[i] = i + 1;


 for (curr_num = 1000000; curr_num > 1; curr_num--){
  if (numbers[curr_num-1] == 0)
   continue;

  chain_length = 0;

  long long temp_num = curr_num;

  while(temp_num != 1){
   if (temp_num < 1000000)
    numbers[temp_num-1] = 0;


   if (temp_num%2!=0)
    temp_num = temp_num * 3 + 1;
   else
    temp_num /=2;


   chain_length ++;
  }


  if ( chain_length > high_chain ){
   high_chain = chain_length;
   high_num = curr_num;
  }
 }


 printf("The number with the longest chain under 1000000 is %d\n", high_num);
}
