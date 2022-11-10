#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main()
{
	int D[SIZE] = { 57,5,182,77,441,98,76,3,84,5 };
	int i,j,temp;

	printf("Array : \n\n");
	for (i = 0;i < SIZE;i++)
		printf("%5d", D[i]);


	for (i = (SIZE-1); i >= 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (D[j] > D[j + 1])
			{
				temp = D[j + 1];
				D[j + 1] = D[j];
				D[j] = temp;
			}
		}

	}

	printf("\n\nResult : \n\n");
	for (i = 0;i < SIZE;i++)
		printf("%5d", D[i]);

	printf("\n\n");
	system("pause");
	return 0;
}