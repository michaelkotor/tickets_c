//6.2
//Рекурсивно удалить предпоследнее слово в строке(не используя новую строку)
#include <stdio.h>
#include <stdlib.h>

void delete(char* str, int start, int end)
{
	if (str[end] != '\0')
	{
		str[start] = str[end];
		delete(str, ++start, ++end);
	}
}


int length(char* string, int i)
{
    if (string[i] == '\0')
    {
        return i;
    }
    return length(string, ++i);
}



int main()
{
	int i = 0;
	int start = 0, end = 0;
	
	char* string = (char*) calloc(100, sizeof(char));
  
	printf("Введите строку начиная с самого начала\n");
  
	fgets(string, 100, stdin);

  while (string[i] != '\0')
	{
		if (string[i] == ' ')
		{
			start = end;
			end = i;
		}
		i++;
	}

  printf("%3d%3d\n", start, end);
  
	delete(string, start, end); 
  
	string = realloc(string, length(string, 0) - end + start + 1);
 
	string[length(string, 0) - end + start] = '\0';
  
	printf("%s", string);
  
	return 0;
}