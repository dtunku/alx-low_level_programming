#include <stdlib.h>
#include <time.h>

/**
 * main - Entry pint
 * Description - Prints if random generated number is +tive, zero or -tive
 * Return: Always 0 (Succes) 
*/
int main(void){

	int n;


	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n > 0){
		printf("%d is positive \n" ,n );
	}
	else if (n == 0){
		printf("%d is equal to zero \n",n );
	}
	else{
		printf("%d is negative \n",n)
	}

	return (0);
