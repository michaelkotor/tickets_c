#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void fun(int num1, int num2, ...)
{
  int sumi = 0;
  double sumd = 0;
  va_list n;
  va_start(n, num2);

  for (int i = 0; i < num1; ++i)
    sumi += va_arg(n, int);

  for (int i = 0; i < num2; ++i)
    sumd += va_arg(n, double);

  printf("%d int \n%lf double\n", sumi, sumd);
}

int main()
{
  fun(2, 2, 5, 2, 5.6, 9.1); //указывать сначала инты, потом даблы. Первый аргумент - количесвто интов, второй - даблов.
}
