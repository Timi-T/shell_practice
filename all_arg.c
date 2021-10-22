#include <stdio.h>
#include <stdarg.h>

int main(int argc, char **argv)
{
	while (*argv != NULL)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (argc);
}
