#include <stdio.h>
#include <malloc.h>

void main()
{
  int** array1,  array2,  array3, n, c;
    printf("Size =");
  scanf("%d", &n);
    array1 = (int**)calloc(n, sizeof(int*));
  for (int i = 0; i < n; i++) *(array1 + i) = (int*)calloc(n, sizeof(int));
  for (int j = 0; j < n; j++)
  for (int i = 0; i < n; i++)
    {
    printf("array1[%d][%d]=", j, i);
    scanf("%d", (*(array1 + j) + i));
  }
  array2 = (int**)calloc(n, sizeof(int*));
  for (int i = 0; i < n; i++) *(array2 + i) = (int*)calloc(n, sizeof(int));
    for (int j = 0; j < n; j++)
    for (int i = 0; i < n; i++)
    {
      printf("array2[%d][%d]=", j, i);
      scanf("%d", (*(array2 + j) + i));
    }
  array3 = (int**)calloc(n, sizeof(int*));
  for (int i = 0; i < n; i++) *(array3 + i) = (int*)calloc(n, sizeof(int));
    int j = 0;
    do 
    {
    int i = 0;
        do 
        {
            *(*(array3 + j) + i) = (*(*(array1 + j) + i)) * (*(*(array2 + j) + i));
      i++;
        }
        while (i < n);
    j++;
    }
    while (j < n);
  printf("\narray3\n");
    for (int j = 0; j < n; j++)
    {
      for (int i = 0; i < n; i++)
      {
        printf("%3d", *(*(array3 + j) + i));
      }
      printf("\n");
    }
}
