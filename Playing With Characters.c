#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    char ch;
   char s[10];
   char sen[20];
   scanf("%c ",&ch);
   scanf("%[^\n]%*c", s);
   scanf("%[^\n]%*c", sen);
   printf("%c\n",ch);
   printf("%s\n",s);
   printf("%s",sen); 
     /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
