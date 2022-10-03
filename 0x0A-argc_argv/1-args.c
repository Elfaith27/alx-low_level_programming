#include "main.h"
#include <stdio.h>

/**
 * main - prints thr name number of arguments passed to it
 * @argc:number of arguments passed to the function
 * @argv:argument vector of pointers to strings
 *
 * Return:always 0
 */
int main(int argc, char ***argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
