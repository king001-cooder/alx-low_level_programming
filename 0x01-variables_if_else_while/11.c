#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b, c;
for (int a = 0; a <= 9; a++)
{
for (int b = a + 1; b <= 9; b++)
{
for (int c = b + 1; c <= 9; c++)
{
putchar(a + '0');
putchar(b + '0');
putchar(c + '0');
if (((a * 100) + (b * 10) + c) < 789)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
}
return (0);
}
