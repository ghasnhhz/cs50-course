#include <stdio.h>
#include <cs50.h>

int main(void)
{
   string answer = get_string("What's your name: ");

   int age;
   do
      {
         age = get_int("And your age: ");
      }
   while(age < 1);
   printf("Hello %s. Your age is %i.\n", answer, age);
}
