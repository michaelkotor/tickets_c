#include <stdio.h> 
#include <stdlib.h> 

void conv(int n, int b, char* m)
{
  int i = 0;
  while (n > 0)
  {
    int k = n % b;
    char z;
    switch (k)
    {
    case 10:
    {
      z = 'A';
      break;
    }
    case 11:
    {
      z = 'B';
      break;
    }
    case 12:
    {
      z = 'C';
      break;
    }
    case 13:
    {
      z = 'D';
      break;
    }
    case 14:
    {
      z = 'E';
      break;
    }
    case 15:
    {
      z = 'F';
      break;
    }
    default:
    {
      z = n % b + '0';
      break;
    }
    }
    m[i] = z;
    //printf("%d-%c\n", n%b, m[i]);
    n = n / b;
    ++i;
  }

  for (int a = i - 1; a >= 0; --a)
  {
    printf("%c", m[a]);
  }

  printf("\n");
}

int main()
{
  int num;
  int bas;
  printf("Enter num: ");
  scanf("%d", &num);
  printf("Enter basis: ");
  scanf("%d", &bas);

  char* nmb = (char*)malloc(sizeof(char) * 100);
  conv(num, bas, nmb);
}
