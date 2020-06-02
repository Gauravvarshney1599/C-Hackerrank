#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,t,sum=0,remainder;
    scanf("%d", &n); 
   t = n;
 
   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }
 
   printf("%d",sum);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}
