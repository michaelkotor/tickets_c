#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define N 4       //áú¤âëåíèå êîëè÷åñòâà ñòðîê ìàññèâà
#define M 4       //áú¤âëåíèå êîëè÷åñòâà ñòîëáöîâ ìàññèâà
#define I 3
int main(){
	int m[N][M] = { 1,3,4,0,5,7,8,1,9,8,7,4,3,2,1,0 };
	int i, j, imin, imax, jmin, jmax;
	int min, max, k;
	bool iss = 0;

	for (i = 0; i < N; i++)
		{
		min = m[i][0];
		jmin = 0;
		imin = i;
		for (j = 1; j < M; j++) if (m[i][j] < min)
			{
			min = m[i][j];
			imin = i;
			jmin = j;
			}
		max = m[imin][jmin];
		for (k = 0; k < M; k++) if (m[k][jmin] > max)
			{
			max = m[k][jmin];
			imax = i;
			jmax = jmin;
			}
		if (/*jmax == jmin && imax == imin*/jmax = imax && min == max)
			{
			printf_s("Sedl Tochka: %d\n", m[imin][jmin]);
			iss=1;
			break;
			}
		}
	if (iss=0) printf_s ("Net Sedl Tochek");

	system("pause");
	return(0);
	}
