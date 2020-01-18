#include <stdio.h>
#include <stdlib.h>


void ShellSort(int** array, int size)
{
    int j;
    for (int step = size / 2; step > 0; step /= 2)
        for (int i = step; i < size; i++)
        {
            int tmp = array[0][i];
            for (j = i; j >= step; j -= step)
            {
                if (tmp < array[0][j - step])
                    array[0][j] = array[0][j - step];
                else
                    break;
            }
            array[0][j] = tmp;
        }
}

void print_array(int* array, int size) 
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

int main() 
{
    int* real_array = (int*) malloc(10 * sizeof(int));

    real_array[0] = 1;
    real_array[1] = 234;
    real_array[2] = 24;
    real_array[3] = 76;
    real_array[4] = 3;
    real_array[5] = 1;
    real_array[6] = 224;
    real_array[7] = 5;
    real_array[8] = 7;
    real_array[9] = 44;
    

    print_array(real_array, 10);
    printf("\n------------------------------\n");
    ShellSort(&real_array, 10);
    print_array(real_array, 10);
}

