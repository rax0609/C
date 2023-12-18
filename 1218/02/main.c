#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int a[4][5]={{0,1,2,3,4},{5,6,7,8,9},{10,11,12,13,14},{15,16,17,18,19}};
	int sum = 0 ;
	int i, j;
	for (i=0 ; i<4 ; i++)
	{
		for (j=0 ; j<5 ; j++)
		{
			printf(" a[%d][%d]=%2d , ", i, j, a[i][j]);
			sum += a[i][j];
		}
		printf("\n");
	}
	printf("\n===  陣列 a 的總和為：%d \n\n", sum);
	system("PAUSE");	
	return 0;
}
