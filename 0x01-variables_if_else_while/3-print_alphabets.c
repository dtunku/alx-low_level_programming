
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 **/
#include <stdio.h>
int main(void)
{
  for (char c = 'a'; c <= 'z'; c++) {
      putchar(c);
  }
  for (char c = 'A'; c <= 'Z'; c++) {
        putchar(c);
  }
  putchar('\n');
    return 0;
 }
