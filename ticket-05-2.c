//Даны две строки. В функции в большую строку записать меньшую с элемента n.

#include <stdio.h>
#include <stdlib.h>

int length(char* string, int i);
void change(char* line1, char* line2, int index);

int main () 
{
    int index;
    char* line1 = (char*) malloc(50 * sizeof(char));
	char* line2 = (char*) malloc(50 * sizeof(char));
  
    fgets(line1 , 50, stdin);
    
    fgets(line2 , 50, stdin);
   
    scanf("%d", &index);
    change(line1, line2, index);
    return 0;
}

void change(char* line1, char* line2, int index)
{
 
  int size1 = length(line1, 0);
  int size2 = length(line2, 0);
  if(size1 > size2)
  {
    int new_size = size2 + size1;
    line1 = realloc(line1, new_size);
    
    int counter = 0;
    
    for (int i = index; i < index + size2 - 1; i++) {
    	line1[i] = line2[counter++];
    }
        
    if (index - size2 > size1) {
    	line1[counter]= '\0';
    } 
  }
  printf("%s", line1);
}

int length(char* string, int i)
{
	if(string[i] == '\0') 
  {
  	return i;
  }
  return length(string, ++i);
}
