#include<stdio.h>
/**
 * *main- Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of char: %ld bytes\n", sizeof(a));
	printf("Size of int: %ld bytes\n", sizeof(b));
	printf("Size of long int: %ld bytes\n", sizeof(c));
	printf("Size of long long int: %ld bytes\n", sizeof(d));
	printf("Size of float: %ld bytes\n", sizeof(e));
	 return (0);
}
