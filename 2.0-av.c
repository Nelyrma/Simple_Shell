#include <stdio.h>

/**
 * main - prints all arguments without using ac
 * @ac: number of arguments in av
 * @av: array of strings (arguments)
 * Return: 0
 */

int main(int ac, char **av)
{
	int i;

	while (av[i])
	{
		printf("%s ", av[i]);
		i++;
	}

	printf("\n");
	return (0);
}
