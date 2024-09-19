#include <stdio.h>
int main ()
{
   int pos1, lift, cas1;
   int time, j;
   int temp;

   scanf (" %d", &cas1);
   for (j = 1; j <= cas1; j++)
    {
      scanf (" %d %d", &pos1, &lift);
      if (lift >= pos1)
        temp = lift - pos1;
      else
      temp = pos1 - lift;
      time = 4 * temp + 4 * pos1 + 19;

      printf ("Case %d: %d\n", j, time);
   }
   return 0;
}
