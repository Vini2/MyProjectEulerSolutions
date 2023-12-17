#include <stdio.h>

main(){
 long long int a = 600851475143;
 int i, b = 0;

for(i=3;;i+=2){
  while ((a % i)==0){
   a /= i;
   b = i;
  }

  if (a == 1)
   break;

}
 printf ("Highest prime factor of 600851475143 is : %d\n", b);
}
