#include <stdio.h>
/**
* main - Print patrick word
* Return: returns 0.
*/
int main(void)
{
	char message[] = "patrick";
	int count = 0;

	while (message[count] != '\0')
	{
		_putchar(message[count]);
		count++;
	}
	_putchar('\n');
	return (0);
}
