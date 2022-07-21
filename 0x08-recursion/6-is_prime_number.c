#include "main.h"
int prime_checker(int n, int i);
/**
 * is_prime_number -returns 1 if the input integer is a prime number
 * @n: input interger
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (prime_checker(n, n / 2) > 0)
		return (1);
	else
		return (0);
}
/**
 * check_prime - Check if number is prime
 * @n: number
 * @i: the iteration times
 * Return: 1 for prime or 0 composite
 */
int check_prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	else if (i == 1)
		return (1);
	else
		return (check_prime(n, i - 1));
}
