//7.2
//Ввести динамическую строку, каждое слово рекурсивно перевернуть и вывести 
#include <stdio.h>

void swap(char* start, char* end)
{
	if (start < end)
	{
		char temp = start[0];
        start[0] = end[0]; 
        end[0] = temp;
	    swap(++start, --end);
	}
}


void main()
{  
	int size, start, end;
  
	printf("Size = ");
  
	scanf("%d", &size);
    getchar();
  
	char* line = (char*) calloc(size + 1, sizeof(char));
  
	rewind(stdin);
  
	fgets(line, size, stdin);
  
	for (int i = 0; i < size; i++)
	{
		while (line[i] == ' ')
        {
            i++; 
        }

		start = i;
		while (line[i] != ' ' && line[i] != '\0' && line[i] != '\n') {
            i++;
        } 
		end = i - 1;
		swap(line + start, line + end);
	}
	puts(line);
}