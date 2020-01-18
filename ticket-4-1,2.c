#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define N 7				//////////////Фибоначчи, ряд начинается с 0
///////////////////////И переворот 1го и посл слова 
int fib(int n)
	{
	if (n < 2) return n;
	return fib(n - 2) + fib(n - 1);
	}
void revers(char*str, int b, int e)
	{
	char t;
	while (b < e)
		{
		t = *(str + b);
		*(str + b) = *(str + e);
		*(str + e) = t;
		b++; e--;
		}
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
	char str[] = "revers this shit" ;
	/*i = 0;
	while (str[i] = ' ') i++;*/  ///Блжд, почему оно не работает
	for (i = 0; str[i] != ' '; i++);
	int b1, e1, b2, e2;
	b1 = i;
	while (*(str + i) != ' ') i++;
	e1 = i - 1;
	while (*(str + i)) i++;
	e2 = i - 1;
	while (*(str + i) != ' ') i--;
	b2 = i + 1;
	revers(str, b1, e1);
	revers(str, b2, e2);
	puts(str);
	system("pause");
	return 0;

	}
