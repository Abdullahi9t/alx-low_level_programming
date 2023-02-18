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
	if (l_digit > 5)
		printf("the last digit of %d is %d and is greater than 5\n", l_digit);
	else if (l_digit == 0)
		printf("the last digit of %d is %d and is equal to zero\n", n, l_digit);
	else if (l_digit < 6)
	        printf("the last digit of %d is %d and is less than six not zero\n", n, l_digit);	
	return (0);
}
