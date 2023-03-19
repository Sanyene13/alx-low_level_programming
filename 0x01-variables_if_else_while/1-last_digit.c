#include <stdlib.h>
#include <stdio.h>
/**
* main - Entry point
* Return: returns 0
*/
int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		alpha = putchar(alpha);
	putchar('\n');
	return (0);
}
