#include <cs50.h>
#include <stdio.h>

int main(void)
{0
   //Prompt the user for starting size of lamass
   int start;
   do
   {
      start = get_int("Start size: ");
   }
   while (start < 9);
   //Prompt the user for ending size of lamass
   int end;
   do
   {
      end = get_int("End size: ");
   }
   while (end < start);
   //Promt the user for number of years to achieve the desired size of lamass
   int years = 0;
   while (start < end)
   {
      start = start + (start / 3) - (start / 4);
      years++;
   }
   printf("Years: %i\n", years);
}