/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 **/

#include <stdio.h>



int main(void)

{

char ch;



for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
putchar('\n');

return (0);

}

