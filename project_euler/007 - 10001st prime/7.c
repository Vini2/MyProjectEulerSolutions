#include<stdio.h>
int main(){
   int i = 3, count, c;

   for ( count = 2 ; count <= 10001 ;  ){

      for ( c = 2 ; c <= i - 1 ; c++ ){
         if ( i%c == 0 )
            break;
      }
      if ( c == i ){
          if(count==10001){
                printf("%d\n",i);
                return 0;
          }
          count++;
      }
      i++;
   }
}
