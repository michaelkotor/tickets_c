#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define N 7			
///////////////////////Переворот 1го и посл слова 
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
	char str[] = "revers this shit";
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
