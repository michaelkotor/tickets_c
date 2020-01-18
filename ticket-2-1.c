#include <stdio.h>
void main()
{
	int n, sum = 0;
	char* str = (char*)calloc(10, sizeof(char));
	fgets(str, 10, stdin);
	int i = 0;
	while (str[i])
	{
		while (str[i] == ' ') {
            i++;
        }
		for (n = 0; '0' <= str[i] && str[i] <= '9'; i++) {
            n = n * 10 + (str[i] - '0');
        }	
		sum += n;
	}
	printf("\n\nsum=%d\n", sum);
}
