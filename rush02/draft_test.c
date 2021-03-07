#include <stdio.h>
#include <stdlib.h>

int get_lines(char **arr);

int main()
{
	char** arr = malloc(sizeof(char*) * 41);
	get_lines(arr);
	printf("%s\n", *arr);
}