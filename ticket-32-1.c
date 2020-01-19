#include <stdio.h>
#include <stdlib.h>

int** foo(int** mas, int size, int sum, int NumbOfRepit, int i);
int** foo2(int** mas, int* sum, int* NumbOfRepit, int i, int j);

int main()
{
	int size;
	printf("введите размер квадратной матрицы \n");
	scanf("%d", &size);
	if (size < 4) {
		printf("вы хотите ввести слишком маленькую матрицу\n ");
		return 0;
	}
	int** mas = NULL;
		mas = (int**)malloc(size * sizeof(int*));
	for (int i = 0; i < size; i++)
		mas[i] = (int*)malloc(size * sizeof(int));
			
	printf("Введите матрицу\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("[%d][%d]=", i, j);
			scanf("%d", &mas[i][j]);
		}
	}

	int sum = 0, NumbOfRepit = 0, i = 1;
	foo(mas, size, sum, NumbOfRepit, i);

	printf("матрица\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%4d", *(*(mas + i) + j));
		}
		printf("\n");
	}
	return 0;
}

int** foo(int** mas, int size, int sum, int NumbOfRepit, int i) {
	int j = 0;
	if (i == size) {
		printf("вы ввели недостаточно четных чисел\n");
		return 0;
	}

	foo2(mas, &sum, &NumbOfRepit, i, j);

	if (NumbOfRepit == 5) {
		printf("Сумма первых 5 четных чисел под главной диаголью равна = %d\n", sum);
		return 0;
	}
	else
		foo(mas, size, sum, NumbOfRepit, i + 1);

}

int** foo2(int** mas, int* ptr_sum, int* ptr_NumbOfRepit, int i, int j) {
	if (j == i)
		return 0;
	if (*ptr_NumbOfRepit == 5)
		return 0;
	if (*(*(mas + i) + j) % 2 == 0) {
		*ptr_sum += *(*(mas + i) + j);
		*ptr_NumbOfRepit += 1;
		foo2(mas, ptr_sum, ptr_NumbOfRepit, i, j + 1);
	}
	else
		foo2(mas, ptr_sum, ptr_NumbOfRepit, i, j + 1);
}
