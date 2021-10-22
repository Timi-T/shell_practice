#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str[] = "ope, yemi, timi, lehin";
	char *arg;
	/*char **array = malloc(strlen(str) + 4);*/
	char **array = NULL;
	int i = 1;
	int j = 0;

	arg = strtok(str, ", ");
	array[0] = arg;
	while (arg != NULL)
	{
		arg = strtok(NULL, ", ");
		if (i <= 3)
		{
			array[i] = arg;
			i++;
		}
	}
	printf("%d\n", i);
	while (j < i)
	{
		printf("%s\n", array[j]);
		j++;
	}
	return (0);
}


