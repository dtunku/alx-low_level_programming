
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 **/
#include <stdio.h>
int main(void)
{
char ch;

for (ch = "a"; ch <= "z"; ch++)
{
	putchar(ch);
}
for (ch = "A";  ch <= "Z"; ch++)
{
	putchar(ch);
}
putchar("\n");

return (0);
}
