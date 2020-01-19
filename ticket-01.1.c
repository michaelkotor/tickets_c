void main()
{
	int** array, n, c;
	printf_s("Size =");
	scanf_s("%d", &n);
	array = (int**)calloc(n, sizeof(int*));
	for (int i = 0; i < n; i++) *(array + i) = (int*)calloc(n, sizeof(int));
	for (int j = 0; j < n; j++)
		for (int i = 0; i < n; i++)
		{
			printf_s("array[%d][%d]=", j, i);
			scanf_s("%d", (*(array + j) + i));
		}
	int j = 0;
	while ( j < n)
	{
      int i = 0;
		while (i < n)
		{
			printf_s("%d ", *(*(array + j) + i));
          i++;
		}
		printf_s("\n");
      j++;
	}
	int i = 0;
	while (i < n - 1)
	{
		int j = 0;
		while (j < n - i)
		{
			c = array [i][j];
			array[i][j] = array[n - 1 - j][n - 1 - i];
			array[n - 1 - j][n - 1 - i] = c;
			j++;
		}
		i++;
	}
	printf_s("\n\n");
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			printf_s("%d ", *(*(array + j) + i));
		}
		printf_s("\n");
	}
}
