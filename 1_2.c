void main()
{
	char** str, * line;
	int len1 = 0, lens = 0, a, b;
	str = (char**)calloc(2, sizeof(char*));
	for (int i = 0; i < 3; i++) str[i] = (char*)calloc(10, sizeof(char));
	for (int i = 0; i < 3; i++)
	{
		rewind(stdin);
		gets_s(str[i], 10);
		if (*(*str + i) == '\0')
			break;
	}
	for (int j = 0; j < 2; j++)
		for (int i = 0; i < 10; i++)
		{
			len1 = 0;
			while (*(*(str + j) + i) != ' ' && *(*(str + j) + i))
			{
				i++;
				len1++;
			}
			if (len1 > lens)
			{
				a = i - len1;
				b = j;
				lens = len1;
			}
		}
	line = (char*)calloc(lens + 1, sizeof(char));
	int k;
	for (k = a; k < a + lens; k++) line[k - a] = *(*(str + b) + k);
	puts(line);
}
