#include <stdio.h>
#include <stdlib.h>

void main()
{
  int** array, min, i, j, u, n, i2, j2, i1 = 0, j1 = 0, k, v = 0;
  printf("Size =");
  scanf("%d", &n);
  array = (int**)calloc(n, sizeof(int*));
  for (int i = 0; i < n; i++) *(array + i) = (int*)calloc(n, sizeof(int));
  for (int j = 0; j < n; j++)
    for (int i = 0; i < n; i++)
    {
      printf("array[%d][%d]=", j, i);
      scanf("%d", (*(array + j) + i));
    }
  printf("\n\n");
  for (int j = 0; j < n; j++)
  {
    for (int i = 0; i < n; i++)
    {
      printf("%d ", *(*(array + j) + i));
    }
    printf("\n");
  }
  for (j = 0; j < n; j++)
  {
    min = *(*(array + j));
    for (i = 1; i < n; i++)             //Поиск минимального значения в строке
    {
      if (min > * (*(array + j) + i))
      {
        min = *(*(array + j) + i);
        i1 = i;
      }
    }
    for (k = 0; k < n; k++)              //Проверка на максимальное значение в солбце
    {
      if (min <= *(*(array + k) + i1))
      {
        if (k == j) continue;
        u = 2;
        break;
      }
      else u = 1;
    }
    if (u == 1)
    {
      printf("\nForce point is available");
      printf("\nForce point =%3d \nms[%d][%d]", min, (j + 1), (i1 + 1));
      v = 1;
    }
    else v = 0;
    u = 0;
    if (v == 1) break;
  }
  if (v == 0) printf("Force point is not available");
}
