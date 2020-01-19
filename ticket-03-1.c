//Два массива вещественных чисел (при вводе должны быть отсортированы по убыванию). 
//В ФУНКЦИИ объединить их в третий массив упорядоченный по убыванию(без сортировки). 

#include <stdio.h>

int* join(int* first, int* second)
{
    int counter = 0;
    int i = 0, j = 0;
    int* result = (int*) malloc(10 * sizeof(int));
    while(counter < 10) 
    {
  	    if (first[i] > second[j]) 
        {
    	    result[counter++] = first[i++]; 
        } 
        else
        {
    	    result[counter++] = second[j++];
        }
    }
	return result;
}

int main()
{
    int* first = (int*) malloc(5 * sizeof(int));
    int* second = (int*) malloc(5 * sizeof(int));
    first[0] = 15;
    first[1] = 13;
    first[2] = 11;
    first[3] = 9;
    first[4] = 7;

    second[0] = 14;
    second[1] = 12;
    second[2] = 10;
    second[3] = 8;
    second[4] = 6;
  
    int* result = join(first, second);
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", result[i]);
    }
    //result 15,14,13,12,11,10,9,8,7,6
}