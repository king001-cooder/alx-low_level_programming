#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
int i = 0;
while (i < 16)
{
if (i < 10)
{
putchar(i + '0');
}
else
{
ch++;
}
i++;
putchar('\n');
}
putchar(ch);
return (0);
}
