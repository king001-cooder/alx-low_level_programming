#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* your code goes there */
char a = 'a';
int n =  0;
while (n < 26)
{
putchar(a);
a++;
n++;
}
putchar('\n');
return (0);
}
