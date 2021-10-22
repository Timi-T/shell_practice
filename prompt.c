#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *buf = NULL;
	size_t len = 0;

	printf("$ ");
	getline(&buf, &len, stdin);
	write(1, buf, strlen(buf));
	free(buf);
	return (0);
}
