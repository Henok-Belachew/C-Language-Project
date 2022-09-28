#include <stdio.h>

//The function that do the addition
int sum(int a, int b)
{
    int theSum;
    theSum = a+b;
    return theSum;
}

int main() {

   int c=5, d=6;
   printf("%d + %d = %d", c,d,sum(c,d));

   return 0;

}
