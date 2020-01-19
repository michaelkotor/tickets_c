//7.1
//Ввести через указатели массив и отсортировать от n до b используя метод Шелла
void main()
{
	int size, flag, move;
  
	printf("Size = ");
  
	scanf("%d", &size);
  
    int* array = (int*) calloc(size, sizeof(int));

	for (int i = 0; i < size; i++)
	{
		printf("array[%d]=", i);
		scanf("%d", array + i);
	}
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
	for (move = size / 2; move > 0; move /= 2)
	{
		do
		{
		    flag = 0;
            for (int i = 0, j = move; j < size; i++, j++)
			{
				if (array[i] > array[j])
				{
					int temp = array[i];
					array[i] = array[j];
					array[j] = temp;
					flag = 1;
				}
            }
		} while (flag);
	}
	printf("\n");
    
	for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    } 
}