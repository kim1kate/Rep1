#include <stdio.h>
#include"functions.h"
#include "euler.h"


//#define SIZE 2

/* int main()
{
   int value = 0;
   int array[SIZE];

   printf("value =");
   scanf_s("%d", &value);

   printf("array = ");

   for (unsigned int i = 0; i < SIZE; ++i)
      scanf_s("%d", &array[i]);

      printf("answer = %llu\n", Problem_1(value, array, SIZE));

   return 0;
}
*/

int main()
{
  /* unsigned int value = 4000000;
   printf("%llu\n", Problem_2(value));*/

   unsigned long long int value = 600851475143;
      //600851475143;
      printf("%llu\n", Problem_3(value));
   return 0;
}