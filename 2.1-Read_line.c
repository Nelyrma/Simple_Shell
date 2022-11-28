#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - PID
 * @ac: Argument count
 * @av: argument vector
 * Return: Always 0
 */

int main(int ac, char *av)
{
	char *buffer = *av;
	size_t bufsize = (size_t) ac;

	buffer = malloc(sizeof(char *) * bufsize);
	if (!buffer)
	{
		printf("Error");
		exit(1);
	}

	printf("$ ");
	getline(&buffer, &len, stdin);
	prinf("%s", buffer);

	return (0);
}
