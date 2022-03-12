#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*more headers goes here */
/**
 *main - program entry point
 *
 *Return: 0 on success. Error code otherwise
 */
int main(void)
{
int n, lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
  /*your code goes here*/
if (lastDigit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
else if (lastDigit == 0)
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
else if (lastDigit < 6 && lastDigit != 0)
{
printf("Last digit of %d is %d and is less than 6 and ", n, lastDigit);
printf("not 0\n");
}
return (0);
}
