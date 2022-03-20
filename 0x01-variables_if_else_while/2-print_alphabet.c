#include <stdio.h>
/**
 * main - Program entry p
 *
 * Return: 0 on success.
 */
int main(void)
{
char a = 'a';
int n = 0;
while (n < 26)
{
putchar(a);
a++;
n++;
putchar('\n');
}
return (0);
}
