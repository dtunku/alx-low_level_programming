/**
 * main -  print out alphabets from a -z
 * return - zero
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

