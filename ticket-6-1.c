void func(int** mt, int n,int i,int j)
{
	if (j < n - i - 1)
	{
		int tmp;
		tmp = mt[i][j];
		mt[i][j] = mt[n - j - 1][n - i - 1];
		mt[n - j - 1][n - i - 1] = tmp;
		func(mt, n, i, j + 1);
	}
	else
	{
		if (i < n)
		{
			func(mt, n, i + 1, j = 0);
		}
		else
			return;
	}
}

int main()
{
	int n = 4;
	int** mt = (int**)calloc(n, sizeof(int*));
	for (int i = 0; i < n; i++)https://gamedev.ru/community/cfd/articles/RecursiveMethod_
		mt[i] = (int*)calloc(n, sizeof(int));
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			mt[i][j] = rand() % 100;
	}
	for (int i = 0; i < n; i++)
	{
		printf("\n");
		for (int j = 0; j < n; j++)
			printf("  %d", mt[i][j]);
	}
	int i = 0, j = 0;
	func(mt, n,i,j);
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		printf("\n");
		for (int j = 0; j < n; j++)
			printf("  %d", mt[i][j]);
	}
}