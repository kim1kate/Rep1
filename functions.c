#include "functions.h"
#include <stdbool.h>
#include <math.h>

/*int MultBy2(int value_)
{
   return value_ * 2;
}*/

long long int Prime(unsigned long long int x)
{
   if (x % 2 == 0)
   return 0;

   for (unsigned int n = 3; n < sqrt((double)x) + 1; n += 2)
      if (x % n == 0)
         return 0;
   return 1;

}
