#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	printf("===  �H�U���}�C A ===\n");
	int a[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
	int sum = 0 ;
	int i, j;
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<5 ; j++)
		{
			printf(" a[%d][%d]=%2d , ", i, j, a[i][j]);
			sum += a[i][j];
		}
		printf("\n");
	}
	printf("\n===  �H�U���}�C B ===\n");
	int b[3][5]={{16,17,18,19,20},{21,22,23,24,25},{26,27,28,29,30}};
	int sum1 = 0 ;
	int i1, j1;
	for (i1=0 ; i1<3 ; i1++)
	{
		for (j1=0 ; j1<5 ; j1++)
		{
			printf(" B[%d][%d]=%2d , ", i1, j1, b[i1][j1]);
			sum1 += b[i1][j1];
		}
		printf("\n");
	}

	printf("\n=== �H�U���}�C A �P�}�C B �� 5 �حp�⵲�G ===\n");
	printf("<<< �p�⵲�G1 : �}�C A ���`�M�� %d >>>\n\n", sum);
	printf("<<< �p�⵲�G2 : �}�C B ���`�M�� %d >>>\n\n", sum1);
	printf("<<< �p�⵲�G3 : �}�C A ���`�M + �}�C B ���`�M�� %d >>>\n\n", sum+sum1);
	printf("<<< �p�⵲�G4 : �}�C A + �}�C B ���H�U�}�C C>>>\n");
	int c[3][5];
	int i2, j2;
	for (i2=0 ; i2<3 ; i2++)
	{
		for (j2=0 ; j2<5 ; j2++)
		{
			c[i2][j2] = a[i2][j2] + b[i2][j2];
			printf(" C[%d][%d]=%2d , ", i2, j2, c[i2][j2]);
		}
		printf("\n");
	}
	printf("\n<<< �p�⵲�G5 : �}�C A �P�}�C B �� Hadamard �ۭ����H�U�}�C D>>>\n");
	int d[3][5];
	int i3, j3;
	for (i3=0 ; i3<3 ; i3++)
	{
		for (j3=0 ; j3<5 ; j3++)
		{
			d[i3][j3] = a[i3][j3] * b[i3][j3];
			printf(" D[%d][%d]=%2d , ", i3, j3, d[i3][j3]);
		}
		printf("\n");
	}
	system("PAUSE");	
	return 0;
}
