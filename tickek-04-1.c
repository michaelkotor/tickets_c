#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define N 7				//////////////Фибоначчи, ряд начинается с 0
int fib(int n)
	{
	if (n < 2) return n;
	return fib(n - 2) + fib(n - 1);
	}
int main()
	{
	int i;
	setlocale(LC_ALL, "Russian");
	printf_s("Фибоначчи рекурсией: %d\n", fib(N));

	int fib1=1, fib2 =1;
	int fibsum=0;
	for  (i = 2; i < N; i++)
		{
		fibsum = fib1 + fib2;
		fib1 = fib2;
		fib2 = fibsum;
		}
	printf_s("Фибоначчи for: %d\n", fibsum);

	fib1 = 1;
	fib2 = 1;
	fibsum = 0;
	i = 2;
	while (i < N)
		{
		fibsum = fib1 + fib2;
		fib1 = fib2;
		fib2 = fibsum;
		i++;
		}
	printf_s("Фибоначчи while: %d\n", fibsum);
	puts("");
	system("pause");
	return 0;

	}
