#include <stdio.h>

int main(int argc, char **argv)
{
	char *list[] = {"./", argv, NULL};

	printf("#cisfun$");
	
	execve(list[0], argv
